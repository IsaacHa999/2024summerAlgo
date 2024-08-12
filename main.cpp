#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string s;
        cin >> s;

        int left = 0, right = s.size() - 1;
        int ans = 0;  // 초기값 0: 회문

        bool isoneCheck = false;

        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                // 유사 회문 체크
                if (!isoneCheck) {
                    if (s[left + 1] == s[right] && left + 1 <= right) {
                        int temp_left = left + 1, temp_right = right;
                        while (temp_left < temp_right && s[temp_left] == s[temp_right]) {
                            temp_left++;
                            temp_right--;
                        }
                        if (temp_left >= temp_right) {
                            ans = 1;
                            break;
                        }
                    }

                    if (s[left] == s[right - 1] && left <= right - 1) {
                        int temp_left = left, temp_right = right - 1;
                        while (temp_left < temp_right && s[temp_left] == s[temp_right]) {
                            temp_left++;
                            temp_right--;
                        }
                        if (temp_left >= temp_right) {
                            ans = 1;
                            break;
                        }
                    }

                    ans = 2;
                    break;
                } else {
                    ans = 2;
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
