#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cin.ignore();  // �����ִ� ���� ���� ����

    for (int i = 0; i < T; i++) {
        string line;
        getline(cin, line);  // �� �� ��ü�� ����
        stringstream ss(line);
        string word;

        while (ss >> word) {  // ������ �������� �ܾ ����
            reverse(word.begin(), word.end());
            cout << word << ' ';
        }
        cout << endl;  // �� �׽�Ʈ ���̽� �� �ٹٲ�
    }

    return 0;
}
