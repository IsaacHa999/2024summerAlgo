// boj 2193 ��ģ��
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
    int n;
    cin >> n;
    ll dp[91][2] = {0,};
    dp[1][1] = 1;

    // �Է� �� ���
    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
        dp[i][1] = dp[i - 1][0];
    }
    cout << dp[n][0] + dp[n][1] << endl;

    //

    // ����
}

// �Լ� ����