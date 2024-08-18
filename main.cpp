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
    cin.ignore();  // 남아있는 개행 문자 제거

    for (int i = 0; i < T; i++) {
        string line;
        getline(cin, line);  // 한 줄 전체를 읽음
        stringstream ss(line);
        string word;

        while (ss >> word) {  // 공백을 기준으로 단어를 읽음
            reverse(word.begin(), word.end());
            cout << word << ' ';
        }
        cout << endl;  // 각 테스트 케이스 후 줄바꿈
    }

    return 0;
}
