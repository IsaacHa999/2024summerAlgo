// boj 11053 가장 긴 증가하는 부분 수열
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
    vector<int> arr(n);
    vector<int> dp(n, 1);   // dp[i] = i번째 수를 마지막으로 하는 가장 긴 증가하는 부분 수열의 길이
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // 입력 및 처리
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    // 출력
    cout << *max_element(dp.begin(), dp.end()) << endl;

    // 로직
}

// 함수 정의