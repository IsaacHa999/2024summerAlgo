// boj
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
    int a, b, c;

    while(1) {
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;

        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
    // ����
}

// �Լ� ����