// boj 1202 보석 도둑
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    vector<pair<int, int>> jewel(N);    // 무게, 가치
    vector<int> bag(K);

    for (int i = 0; i < N; i++)
        cin >> jewel[i].first >> jewel[i].second;

    // 가방에 담을 수 있는 무게
    for (int i = 0; i < K; i++)
        cin >> bag[i];

    // 무게 기준 오름차순 정렬
    sort(jewel.begin(), jewel.end());   //
    sort(bag.begin(), bag.end());

    // 가방에 담을 수 있는 무게가 작은 것부터 확인
    priority_queue<int> pq;
    ll ans = 0;
    int idx = 0;
    for (int i = 0; i < K; i++)
    {
        // 가방에 담을 수 있는 무게보다 작은 보석들을 모두 pq에 넣음
        while (idx < N && jewel[idx].first <= bag[i])
        {
            pq.push(jewel[idx].second);
            idx++;
        }

        // pq에 있는 보석들 중 가치가 가장 큰 것을 선택
        if (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
    }

    // 출력
    cout << ans << endl;
}
