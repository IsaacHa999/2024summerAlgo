// boj 1316 �׷� �ܾ� üĿ
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

// �Լ� ����
bool isGroupWord(string word);

// ���� ����

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ���� ����, �ʱ�ȭ
    int N;
    cin >> N;
    vector<string> words(N);
    int count = 0;

    for (int i = 0 ;i < N; i++)
        cin >> words[i];

    for (int i = 0; i < N; i++) {
        if(isGroupWord(words[i]))
            count++;
    }

    // ���
    cout << count << endl;
}

// �Լ� ����
bool isGroupWord(string word) {
    vector<bool> check(26, false);
    for (int i = 0; i < word.size(); i++) {
        if (check[word[i] - 'a']) return false;
        check[word[i] - 'a'] = true;
        while (i + 1 < word.size() && word[i] == word[i + 1]) i++;
    }
    return true;
}