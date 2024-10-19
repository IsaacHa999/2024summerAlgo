// boj 16956 ����� ��
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
    int r, c;
    cin >> r >> c;
    vector<string> board(r);
    for (int i = 0; i < r; i++)
        cin >> board[i];

    // ����
    bool isPossible = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (board[i][j] == 'W')
            {
                if (i > 0 && board[i - 1][j] == 'S')
                {
                    isPossible = false;
                    break;
                }
                if (i < r - 1 && board[i + 1][j] == 'S')
                {
                    isPossible = false;
                    break;
                }
                if (j > 0 && board[i][j - 1] == 'S')
                {
                    isPossible = false;
                    break;
                }
                if (j < c - 1 && board[i][j + 1] == 'S')
                {
                    isPossible = false;
                    break;
                }
            }
        }
        if (!isPossible)
            break;
    }
    // ���
    if (!isPossible)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << 1 << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (board[i][j] == '.')
                cout << 'D';
            else
                cout << board[i][j];
        }
        cout << endl;
    }

    // ����
}

// �Լ� ����