// boj 9372 상근이의 여행
#pragma GCC optimize("O3")  //

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    int N, M;
    cin >> T;

    // MST의 성질을 이용하면, 최소 간선의 수는 N-1개이다.
    // 따라서, N-1개의 간선을 선택하면 모든 정점을 연결할 수 있다.
    // 따라서, N-1개의 간선을 선택하면, 최소 비행기 종류의 수를 구할 수 있다.
    while (T--)
    {
        cin >> N >> M;
        for (int i = 0; i < M; i++)
        {
            int a, b;
            cin >> a >> b;
        }
        cout << N - 1 << endl;
    }
}

