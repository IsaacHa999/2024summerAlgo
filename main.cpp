// boj 1316 그룹 단어 체커
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

// 함수 선언
bool isGroupWord(string word);

// 전역 변수

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 변수 선언, 초기화
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

    // 출력
    cout << count << endl;
}

// 함수 정의
bool isGroupWord(string word) {
    vector<bool> check(26, false);
    for (int i = 0; i < word.size(); i++) {
        if (check[word[i] - 'a']) return false;
        check[word[i] - 'a'] = true;
        while (i + 1 < word.size() && word[i] == word[i + 1]) i++;
    }
    return true;
}