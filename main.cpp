// boj 14425 문자열 집합
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

    // 입력
    int N, M;
    cin >> N >> M;
    set<string> S;  // 문자열 집합

    // 문자열 집합 S에 문자열 입력
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        S.insert(str);
    }

    // 문자열 집합 S에 문자열이 있는지 확인
    int cnt = 0;
    for (int i = 0; i < M; i++) {
        string str;
        cin >> str;
        if (S.find(str) != S.end()) cnt++;  // 문자열이 있으면 cnt 증가
    }

    cout << cnt << endl;
}

