// boj 11651 ��ǥ �����ϱ� 2
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
    vector<pair<int, int>> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].second >> v[i].first;   // y, x
    }

    // ����
    sort(v.begin(), v.end());

    // ���
    for (int i = 0; i < N; i++) {
        cout << v[i].second << ' ' << v[i].first << endl;
    }
}

// �Լ� ����