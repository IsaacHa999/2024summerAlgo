// boj
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
    int a, b, c;

    while(1) {
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;

        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
    // 로직
}

// 함수 정의