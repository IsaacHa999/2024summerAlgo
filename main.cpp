// boj 10250 ACM 호텔

#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int H, W, N;
        cin >> H >> W >> N;
        int floor = N % H;
        int room = N / H + 1;

        if (floor == 0) {
            floor = H;
            room--;
        }
        cout << floor * 100 + room << endl;
    }
}



