// boj 1065 ÇÑ¼ö
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

bool isHan(int n)
{
    if (n < 100)
        return true;
    if (n == 1000)
        return false;
    int a = n % 10;
    n /= 10;
    int b = n % 10;
    n /= 10;
    int c = n % 10;
    return a - b == b - c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int cnt = 0;

    for (int i = 1; i <= N; i++) {
        if (isHan(i))
            cnt++;
    }

    cout << cnt << endl;
}
