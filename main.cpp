// boj
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

// �Լ� ����

// ���� ����
//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ���� ����, �ʱ�ȭ
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    int min = 10001;

    // logic
    // 0    x    w
    // 0    y   h
    if (x < min)
        min = x;
    if (w-x < min)
        min = w - x;
    if (y < min)
        min = h;
    if (h - y < min)
        min = h - y;

    cout << min << endl;

    // ����
}

// �Լ� ����