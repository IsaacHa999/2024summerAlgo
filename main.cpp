// boj 1181 단어 정렬
// 길이가 짧은 것부터
// 길이가 같으면 사전 순으로

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
    vector<string> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    // 길이가 짧은 것부터, 길이가 같으면 사전 순으로
    sort(v.begin(), v.end(), [](const string &a, const string &b) {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
    });

    // 중복 제거
    v.erase(unique(v.begin(), v.end()), v.end());   // 중복 제거, unique는 중복된 원소를 맨 뒤로 보내고 중복되지 않은 원소의 시작 주소를 반환
    // 출력
    for (const auto &s : v) {
        cout << s << endl;
    }
}



