// boj 1744 수 묶기
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> pos, neg;
    int one = 0;
    bool iszero = false;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x == 1) one++;
        else if (x > 0) pos.push_back(x);
        else if (x < 0) neg.push_back(x);
        else if (x == 0) iszero = true;
    }

    // 양수는 큰 수끼리 곱하고 음수는 작은 수끼리 곱하면 된다.
    sort(pos.begin(), pos.end(), greater<int>());
    sort(neg.begin(), neg.end());

    // 양수
    int ans = 0;
    for (int i = 0; i < pos.size(); i += 2) {
        if (i + 1 < pos.size())
            ans += pos[i] * pos[i + 1];
        else ans += pos[i];
    }

    //음수: 0이 존재하고 홀수개면 0과 곱해야 한다, 0이 없으면 마지막 음수는 더해야 한다.
    if (iszero) {   // 0이 존재하는 경우, 마지막 홀수는 더하지 않는다.
        for (int i = 0; i < neg.size(); i += 2) {
            if (i + 1 < neg.size())
                ans += neg[i] * neg[i + 1];
        }
    } else {
        for (int i = 0; i < neg.size(); i += 2) {
            if (i + 1 < neg.size())
                ans += neg[i] * neg[i + 1];
            else ans += neg[i];
        }
    }

    // 1은 더해준다.
    ans += one;

    // 출력
    cout << ans << endl;
}