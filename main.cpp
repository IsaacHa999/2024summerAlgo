// boj 10807 개수 세기
// 구현
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
    int n, v, cnt = 0;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // 입력 및 처리
    cin >> v;

    cnt = count(arr.begin(), arr.end(), v);

    cout << cnt << endl;
    // 로직
}

// 함수 정의