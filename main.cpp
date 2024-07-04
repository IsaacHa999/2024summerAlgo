// boj 2751 수 정렬하기 2
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
    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    // v 를 정렬
    sort(v.begin(), v.end());
    // v 를 출력
    for (int i = 0; i < N; i++) {
        cout << v[i] << endl;
    }

}