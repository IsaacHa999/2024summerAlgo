// boj 10773 제로
#pragma GCC optimize("O3")  //

#include <bits/stdc++.h>


#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K;
    stack<int> s;
    int sum = 0;

    cin >> K;

    for (int i = 0; i < K; i++) {
        int num;
        cin >> num;
        if (num == 0) {
            s.pop();
        } else {
            s.push(num);
        }
    }

    // 합 출력
    for (int i = 0; !s.empty(); i++) {
        sum += s.top();
        s.pop();
    }
    cout << sum << endl;
}