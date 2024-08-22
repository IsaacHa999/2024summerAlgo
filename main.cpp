// boj 11651 좌표 정렬하기 2
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
    vector<pair<int, int>> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].second >> v[i].first;   // y, x
    }

    // 로직
    sort(v.begin(), v.end());

    // 출력
    for (int i = 0; i < N; i++) {
        cout << v[i].second << ' ' << v[i].first << endl;
    }
}

// 함수 정의