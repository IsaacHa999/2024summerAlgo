// boj 17219 비밀번호 찾기
/*
주제
자료 구조 ??
해시를 사용한 집합과 맵 ??

예제 입력

예제 출력
 */
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
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    for (int i = 0; i < m; i++)
    {
        string a;
        cin >> a;
        cout << mp[a] << endl;
    }

    // 로직
}

// 함수 정의