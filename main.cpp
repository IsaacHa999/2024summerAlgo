// boj 2839 ���� ���
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
    int count = 0;

    // ����
    while (1) {
        if (N % 5 == 0) {
            count += N / 5;
            break;
        }
        else {
            N -= 3;
            count++;
        }
        if (N < 0) {
            count = -1;
            break;
        }
    }

    // ���
    cout << count << endl;

}

// �Լ� ����