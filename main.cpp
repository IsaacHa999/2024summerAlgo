// boj 2217 로프

#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> ropes(N);
    int max_weight = 0;

    for (int i = 0; i < N; i++) {
        cin >> ropes[i];
    }

    // 내림차순 정렬
    sort(ropes.begin(),ropes.end());
    reverse(ropes.begin(),ropes.end());

    // 최대 중량 구하기
    for (int i = 0; i < N; i++) {
        max_weight = max(max_weight, ropes[i] * (i + 1));
    }

    // 출력
    cout << max_weight << endl;
}