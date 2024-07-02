// boj 1929 소수 구하기
#pragma GCC optimize("O3")  //

#include <bits/stdc++.h>


#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cin >> M >> N;

    vector<int> prime(N + 1, 1);
    prime[0] = prime[1] = 0;

    // 에라토스테네스의 체
    for (int i = 2; i <= N; i++)
    {
        if (prime[i] == 0)  // 소수가 아님
            continue;
        for (int j = i * 2; j <= N; j += i)
            prime[j] = 0;
    }

    // 소수 출력
    for (int i = M; i <= N; i++)
    {
        if (prime[i] == 1)
            cout << i << endl;
    }
}