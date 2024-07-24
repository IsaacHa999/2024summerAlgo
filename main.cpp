// boj 1439 뒤집기
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    // 간단하게 생각하면 0과 1의 연속된 구간의 개수를 세면 된다.
    vector<int> simple;

    int before = s[0] - '0';
    simple.push_back(before);

    for (int i = 0; i < s.size(); i++) {
        int num = s[i] - '0';

        if (before != num) {
            simple.push_back(num);
            before = num;
        }
    }

    // // debug code : simple 배열 출력
    // for (int i = 0; i < simple.size(); i++) {
    //     cout << simple[i] << " ";
    // }
    // cout << endl;

    // 0과 1이 바뀌는 순간이 없다면
    if (simple.size() == 0) {
        cout << 0 << endl;
        return 0;
    }

    // 0과 1이 바뀌는 순간이 있다면, 더 작은 개수를 출력
    int cnt = 0;
    for (int i = 0; i < simple.size(); i++) {
        if (simple[i] == 0) {
            cnt++;
        }
    }
    //
    if (cnt > simple.size() - cnt) {
        cout << simple.size() - cnt << endl;
    } else {
        cout << cnt << endl;
    }
}
