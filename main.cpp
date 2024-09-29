// boj 11053 ���� �� �����ϴ� �κ� ����
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
    vector<int> arr(n);
    vector<int> dp(n, 1);   // dp[i] = i��° ���� ���������� �ϴ� ���� �� �����ϴ� �κ� ������ ����
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // �Է� �� ó��
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    // ���
    cout << *max_element(dp.begin(), dp.end()) << endl;

    // ����
}

// �Լ� ����