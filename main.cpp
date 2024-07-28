// boj 10809 ¾ËÆÄºª Ã£±â
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;
    vector<int> alpha(26, -1);

    for (int i = 0; i < S.size(); i++) {
        alpha[i] = S.find('a' + i);
    }

    // output
    for (int i = 0; i < 26; i++) {
        cout << alpha[i] << ' ';
    }

}
