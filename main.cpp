// boj 10807 ���� ����
// ����
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
    int n, v, cnt = 0;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // �Է� �� ó��
    cin >> v;

    cnt = count(arr.begin(), arr.end(), v);

    cout << cnt << endl;
    // ����
}

// �Լ� ����