// boj 5635 생일
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<string, tuple<int, int, int>>> v(n);
    for (int i = 0; i < n; i++) {
        string name;
        int d, m, y;
        cin >> name >> d >> m >> y;
        v[i] = {name, {y, m, d}};
    }
    sort(v.begin(), v.end(), [](const pair<string, tuple<int, int, int>> &a, const pair<string, tuple<int, int, int>> &b) {
        if (get<0>(a.second) == get<0>(b.second)) {
            if (get<1>(a.second) == get<1>(b.second)) {
                return get<2>(a.second) < get<2>(b.second);
            }
            return get<1>(a.second) < get<1>(b.second);
        }
        return get<0>(a.second) < get<0>(b.second);
    });

    // min 이름, max 이름 출력
    cout << v[n - 1].first << endl << v[0].first << endl;
}