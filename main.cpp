// boj 11399 ATM

#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector<int> S;
    S.push_back(v[0]);
    for (int i = 1; i < N; i++) {
        S.push_back(S[i - 1] + v[i]);
    }
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += S[i];
    }

    // output
    cout << sum << endl;
}



