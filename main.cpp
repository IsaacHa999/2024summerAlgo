#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

// Direction arrays for moving up, down, left, right
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Variable declaration and initialization
    int n, m;
    cin >> n >> m;

    vector<vector<char>> campus(n, vector<char>(m));
    pair<int, int> hero; // Position of 'I'

    // Input campus data
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> campus[i][j];

            if (campus[i][j] == 'I') { // Find hero's position
                hero = {i, j};
            }
        }
    }

    int countPerson = 0;

    // BFS
    queue<pair<int, int>> q;
    vector<vector<int>> visited(n, vector<int>(m, 0)); // Initialize visited array
    q.push(hero);
    visited[hero.first][hero.second] = 1;

    while (!q.empty()) { // Use !q.empty() for BFS
        pair<int, int> front = q.front();
        q.pop();

        // Check if current position contains a person 'P'
        if (campus[front.first][front.second] == 'P')
            countPerson++;

        // Explore 4 directions
        for (int i = 0; i < 4; i++) {
            int x = front.first + dx[i];
            int y = front.second + dy[i];

            // Check bounds and if not visited and not a wall 'X'
            if (x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && campus[x][y] != 'X') {
                q.push({x, y});
                visited[x][y] = 1;
            }
        }
    }

    // Output the result
    if (countPerson > 0)
        cout << countPerson << endl;
    else
        cout << "TT" << endl; // Output "TT" if no person 'P' is found
}
