// boj 11724 연결 요소의 개수
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<vector<int>> adj(N + 1);
    vector<bool> visited(N + 1, false);

    //
    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // BFS
    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        if (visited[i])
            continue;
        cnt++;
        queue<int> q;
        q.push(i);
        visited[i] = true;
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            for (int next : adj[cur])
            {
                if (visited[next])
                    continue;
                visited[next] = true;
                q.push(next);
            }
        }
    }

    // Output
    cout << cnt << endl;
}
