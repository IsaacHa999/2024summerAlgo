// boj 2609 최대공약수와 최소공배수
#pragma GCC optimize("O3")  //

#include <bits/stdc++.h>


#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int gcd = __gcd(a, b);
    cout << gcd << endl;
    cout << a * b / gcd << endl;

}