// boj 1764 �躸��
/*
 * �ڷᱸ��: set, map, unordered_map, unordered_set
 * 1. set: �ߺ��� ������� �ʴ� �ڷᱸ��
 * 2. map: key-value ������ �̷���� �ڷᱸ��
 * 3. unordered_map: map�� ���� ����� ������, �ؽ��Լ��� ����Ͽ� �� ������ ����
 * 4. unordered_set: set�� ���� ����� ������, �ؽ��Լ��� ����Ͽ� �� ������ ����
 *
 * �Ǵ� vector�� �̿��Ͽ� Ǯ �� ���� (�� ������ vector�� �̿��Ͽ� Ǯ��), binary_search�� �̿��Ͽ� Ǯ��
 */
#pragma GCC optimize("O3")

#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
using namespace std;

// �Լ� ����

// ���� ����

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ���� ����, �ʱ�ȭ
    int N, M;
    cin >> N >> M;
    vector<string> v1(N), v2(M);
    int cnt = 0;
    vector<string> ans;
    for (int i = 0; i < N; i++)
        cin >> v1[i];

    // ����
    sort(v1.begin(), v1.end());

    for (int i = 0; i < M; i++) {
        cin >> v2[i];
        if (binary_search(v1.begin(), v1.end(), v2[i])) {
            cnt++;
            ans.push_back(v2[i]);
        }
    }

    // ���
    cout << cnt << endl;
    sort(ans.begin(), ans.end());
    for (auto& i : ans)
        cout << i << endl;


}

// �Լ� ����