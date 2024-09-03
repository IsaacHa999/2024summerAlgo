#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력받은 식
    string s;
    cin >> s;

    // '-'로 식을 나눈다
    stringstream ss(s);
    string token;
    vector<string> terms;

    while (getline(ss, token, '-')) {
        terms.push_back(token);
    }

    // 첫 번째 그룹은 더해준다
    int sum = 0;
    stringstream first(terms[0]);
    while (getline(first, token, '+')) {
        sum += stoi(token);
    }

    // 나머지 그룹들은 빼준다
    for (int i = 1; i < terms.size(); ++i) {
        stringstream ss(terms[i]);
        while (getline(ss, token, '+')) {
            sum -= stoi(token);
        }
    }

    // 결과 출력
    cout << sum << endl;

    return 0;
}
