// boj 2798 블랙잭
#pragma GCC optimize("O3")  //

#include <bits/stdc++.h>


#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> cards(N);
    for (int i = 0; i < N; i++)
        cin >> cards[i];

    // 3개의 카드를 고르는 모든 경우의 수
    int max = 0;
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= M && sum > max)
                    max = sum;
            }
        }
    }

    // 출력
    cout << max << endl;
}