// boj 11725 트리의 부모 찾기
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
    vector<vector<int>> adj(N + 1); // 인접리스트
    vector<int> parent(N + 1);    // 부모노드

    // 트리 입력
    for (int i = 0; i < N - 1; i++) // 트리의 간선
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // bfs
    queue<int> q;
    q.push(1);
    parent[1] = 1;
    while (!q.empty())
    {
        int cur = q.front();    // 현재 노드
        q.pop();
        for (int next : adj[cur])   // 인접노드
        {
            if (parent[next] == 0)  // 방문하지 않은 노드
            {
                parent[next] = cur; // 부모노드 저장
                q.push(next);    // 큐에 삽입
            }
        }
    }

    // print
    for (int i = 2; i <= N; i++)
    {
        cout << parent[i] << endl;
    }
}