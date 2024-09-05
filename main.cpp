// boj 1764 듣보잡
/*
 * 자료구조: set, map, unordered_map, unordered_set
 * 1. set: 중복을 허용하지 않는 자료구조
 * 2. map: key-value 쌍으로 이루어진 자료구조
 * 3. unordered_map: map과 같은 기능을 하지만, 해시함수를 사용하여 더 빠르게 동작
 * 4. unordered_set: set과 같은 기능을 하지만, 해시함수를 사용하여 더 빠르게 동작
 *
 * 또는 vector를 이용하여 풀 수 있음 (이 문제는 vector를 이용하여 풀이), binary_search를 이용하여 풀이
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
    int N, M;
    cin >> N >> M;
    vector<string> v1(N), v2(M);
    int cnt = 0;
    vector<string> ans;
    for (int i = 0; i < N; i++)
        cin >> v1[i];

    // 로직
    sort(v1.begin(), v1.end());

    for (int i = 0; i < M; i++) {
        cin >> v2[i];
        if (binary_search(v1.begin(), v1.end(), v2[i])) {
            cnt++;
            ans.push_back(v2[i]);
        }
    }

    // 출력
    cout << cnt << endl;
    sort(ans.begin(), ans.end());
    for (auto& i : ans)
        cout << i << endl;


}

// 함수 정의