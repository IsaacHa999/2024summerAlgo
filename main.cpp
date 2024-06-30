// boj 10828 Ω∫≈√
#pragma GCC optimize("O3")  //

#include <bits/stdc++.h>


#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    stack<int> s;
    while (N--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int num;
            cin >> num;
            s.push(num);
        } else if (cmd == "pop") {
            if (s.empty())
                cout << -1 << endl;
            else {
                cout << s.top() << endl;
                s.pop();
            }
        } else if (cmd == "size") {
            cout << s.size() << endl;
        } else if (cmd == "empty") {
            if (s.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        } else if (cmd == "top") {
            if (s.empty())
                cout << -1 << endl;
            else
                cout << s.top() << endl;
        }
    }
}