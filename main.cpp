// boj 10828 스택
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

// 함수 선언

// 전역 변수

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 변수 선언, 초기화
    int n;
    cin >> n;
    stack<int> s;

    // 로직
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int num;
            cin >> num;
            s.push(num);
        } else if (cmd == "pop") {
            if (s.empty()) {
                cout << -1 << endl;
            } else {
                cout << s.top() << endl;
                s.pop();
            }
        } else if (cmd == "size") {
            cout << s.size() << endl;
        } else if (cmd == "empty") {
            cout << s.empty() << endl;
        } else if (cmd == "top") {
            if (s.empty()) {
                cout << -1 << endl;
            } else {
                cout << s.top() << endl;
            }
        }
    }
}

// 함수 정의