// boj 10814 나이순 정렬
#pragma GCC optimize("O3")  //

#include <bits/stdc++.h>


#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<pair<int, string>> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    // stable_sort : 정렬 전의 순서가 유지되는 정렬
    stable_sort(v.begin(), v.end(), [](pair<int, string> a, pair<int, string> b) {
        return a.first < b.first;
    });

    // 출력
    for (int i = 0; i < N; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}