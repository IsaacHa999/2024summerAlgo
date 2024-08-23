// boj 28702 FizzBuzz
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
    vector<pair<string,bool>> v(3); // 숫자면 true, 문자면 false
    for (int i = 0; i < 3; i++) {
        cin >> v[i].first;
        v[i].second = false;
    }
    // 로직
    // v 중에 숫자가 있는지 확인
    for (int i = 0; i < 3; i++) {
        if (v[i].first == "Fizz" || v[i].first == "Buzz" || v[i].first == "FizzBuzz") {
            v[i].second = false;
        }
        else {
            v[i].second = true;
        }
    }

    // 숫자를 찾고, 인덱스와, 값 구한다
    int num = 0, index = 0;
    for (int i = 0; i < 3; i++) {
        if(v[i].second == true) {
            num = stoi(v[i].first);
            index = i;
            break;
        }
    }
    // 다음 출력 값 구하기
    int number = 0;         // 다음 숫자
    if (index == 0)
        number = num + 3;
    else if (index == 1)
        number = num + 2;
    else if (index == 2)
        number = num + 1;

    // // 디버깅
    // cout << "index : " << index << endl;
    // cout << "number : " << number << endl;

    // number FizzBuzz 판별
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "FizzBuzz" << endl;
    }
    else if (number % 3 == 0) {
        cout << "Fizz" << endl;
    }
    else if (number % 5 == 0) {
        cout << "Buzz" << endl;
    }
    else {
        cout << number << endl;
    }

}

// 함수 정의