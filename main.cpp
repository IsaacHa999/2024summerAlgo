// boj 2839 설탕 배달
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
    int N;
    cin >> N;
    int count = 0;

    // 로직
    while (1) {
        if (N % 5 == 0) {
            count += N / 5;
            break;
        }
        else {
            N -= 3;
            count++;
        }
        if (N < 0) {
            count = -1;
            break;
        }
    }

    // 출력
    cout << count << endl;

}

// 함수 정의