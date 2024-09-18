// boj 2667 단지번호붙이기
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

// 함수 선언


// 전역 변수

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 변수 선언, 초기화
    int n;
    cin >> n;
    vector<string> map(n);
    for (int i = 0; i < n; i++)
        cin >> map[i];

    int cnt = 0;    // 단지 수
    vector<int> ans;    // 단지별 집 수

    // 로직
    vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == '1')
            {
                cnt++;
                q.push({i, j});
                map[i][j] = '0';
                int house = 1;  // 집 수
                while (!q.empty())
                {
                    auto [x, y] = q.front();
                    q.pop();
                    for (auto [dx, dy] : dir)
                    {
                        int nx = x + dx;
                        int ny = y + dy;
                        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                            continue;
                        if (map[nx][ny] == '1')
                        {
                            house++;
                            q.push({nx, ny});
                            map[nx][ny] = '0';
                        }
                    }
                }
                ans.push_back(house);
            }
        }

    // 출력
    cout << cnt << endl;
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;

}

// 함수 정의