#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // �Է¹��� ��
    string s;
    cin >> s;

    // '-'�� ���� ������
    stringstream ss(s);
    string token;
    vector<string> terms;

    while (getline(ss, token, '-')) {
        terms.push_back(token);
    }

    // ù ��° �׷��� �����ش�
    int sum = 0;
    stringstream first(terms[0]);
    while (getline(first, token, '+')) {
        sum += stoi(token);
    }

    // ������ �׷���� ���ش�
    for (int i = 1; i < terms.size(); ++i) {
        stringstream ss(terms[i]);
        while (getline(ss, token, '+')) {
            sum -= stoi(token);
        }
    }

    // ��� ���
    cout << sum << endl;

    return 0;
}
