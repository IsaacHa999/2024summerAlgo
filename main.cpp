// boj 2579 ��� ������
/*
 is) ��ȭ�� 2���� ����Ͽ� Ǯ�� (����, jump)
 �ٸ� Ǯ��: ��ȭ�� 1���� ����Ͽ� Ǯ��
    DP[1] = Arr[1];    // ù ��° ��ܱ����� Max ���� ù��° ��� ������
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

// �Լ� ����

// ���� ����

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ���� ����, �ʱ�ȭ
    int N;
    cin >> N;
    vector<int> stairs(N + 1);
    vector<pair<int,int>> dp(N + 1, {0, 0});    // ����, jump
    for (int i = 1; i <= N; i++)
        cin >> stairs[i];

    // ����
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

    // ���
    cout << max(dp[N].first, dp[N].second) << endl;
}

// �Լ� ����