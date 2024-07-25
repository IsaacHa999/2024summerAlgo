// boj 2891 카약과 강풍
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int S, R;
    cin >> S >> R;

    vector<int> team(N+1,1);    // 카약의 개수
    team[0] = -1;

    for (int i = 0; i < S; i++) {
        int num;
        cin >> num;
        team[num] = 0;
    }

    for (int i = 0; i < R; i++) {
        int num;
        cin >> num;
        team[num]++;
    }

    // 카약이 부족한 팀을 찾아서 카약을 빌려준다.
    for (int i = 1; i <= N; i++) {
        if (team[i] == 0) {
            if (team[i - 1] == 2) {
                team[i - 1]--;
                team[i]++;
            }
            else if (team[i + 1] == 2) {
                team[i + 1]--;
                team[i]++;
            }
        }
    }

    // team 중 0의 개수를 출력
    int count_team = 0;
    for (int i = 1; i <= N; i++) {
        if (team[i] == 0) count_team++;
    }
    cout << count_team << endl;
}
