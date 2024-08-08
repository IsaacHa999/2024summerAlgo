#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string bomb;
    cin >> bomb;

    string ans;

    for (char c : s) {
        ans.push_back(c);
        if (ans.size() >= bomb.size() && ans.substr(ans.size() - bomb.size(), bomb.size()) == bomb) {
            ans.erase(ans.size() - bomb.size(), bomb.size());   //
        }
    }

    if (ans.empty()) {
        cout << "FRULA" << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}
