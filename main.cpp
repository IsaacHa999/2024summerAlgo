// boj 1927 �ּ� ��
/*
�ּ� ��: �θ� ����� ���� �ڽ� ����� ������ ���� ���� ���� Ʈ��
����: �켱���� ť ���
Ư¡: ���� ���� ���� ��Ʈ�� ��ġ

1. �Է°��� 0�̸� ���� ���� ���� ����ϰ� ����
2. �Է°��� 0�� �ƴϸ� �켱���� ť�� ����
*/
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

// �Լ� ����

// ���� ����

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ���� ����, �ʱ�ȭ
    int N;
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;

    // ����
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

// �Լ� ����