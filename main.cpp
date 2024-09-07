// boj 1927 최소 힙
/*
최소 힙: 부모 노드의 값이 자식 노드의 값보다 작은 완전 이진 트리
구현: 우선순위 큐 사용
특징: 가장 작은 값이 루트에 위치

1. 입력값이 0이면 가장 작은 값을 출력하고 제거
2. 입력값이 0이 아니면 우선순위 큐에 삽입
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
    int N;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;

    // 로직
    while (N--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            if (pq.empty())
                cout << 0 << endl;
            else
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
        else
            pq.push(x);
    }
}

// 함수 정의