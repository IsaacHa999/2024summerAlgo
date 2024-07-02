// boj 9012 °ýÈ£
#pragma GCC optimize("O3")  //

#include <bits/stdc++.h>


#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string str;
        cin >> str;
        stack<char> s;
        bool flag = true;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == '(') {
                s.push(str[j]);
            } else {
                if (s.empty()) {
                    flag = false;
                    break;
                }
                s.pop();
            }
        }
        if (!s.empty()) {
            flag = false;
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}