// boj 2579 계단 오르기
/*
 is) 점화식 2개를 사용하여 풀이 (연속, jump)
 다른 풀이: 점화식 1개를 사용하여 풀이
    DP[1] = Arr[1];    // 첫 번째 계단까지의 Max 값은 첫번째 계단 값이지
    DP[2] = Arr[1] + Arr[2];
    DP[3] = Max(Arr[1] + Arr[3], Arr[2] + Arr[3]);
    for (int i = 4; i <= N; i++)
    {
        DP[i] = Max(DP[i - 2] + Arr[i], DP[i - 3] + Arr[i-1] + Arr[i]);
    }
 */
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
    int N;
    cin >> N;
    vector<int> stairs(N + 1);
    vector<pair<int,int>> dp(N + 1, {0, 0});    // 연속, jump
    for (int i = 1; i <= N; i++)
        cin >> stairs[i];

    // 로직
    dp[0] = {0, 0};
    dp[1] = {stairs[1], stairs[1]};

    for (int i = 2; i <= N; i++)
    {
        dp[i].first = dp[i - 1].second + stairs[i];
        dp[i].second = max(dp[i - 2].first, dp[i - 2].second) + stairs[i];
    }

    // // debug
    // for (int i = 0; i < N + 1; i++)
    //     cout << dp[i].first << " " << dp[i].second << endl;

    // 출력
    cout << max(dp[N].first, dp[N].second) << endl;
}

// 함수 정의