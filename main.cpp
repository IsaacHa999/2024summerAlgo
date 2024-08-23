// boj 28702 FizzBuzz
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
    vector<pair<string,bool>> v(3); // ���ڸ� true, ���ڸ� false
    for (int i = 0; i < 3; i++) {
        cin >> v[i].first;
        v[i].second = false;
    }
    // ����
    // v �߿� ���ڰ� �ִ��� Ȯ��
    for (int i = 0; i < 3; i++) {
        if (v[i].first == "Fizz" || v[i].first == "Buzz" || v[i].first == "FizzBuzz") {
            v[i].second = false;
        }
        else {
            v[i].second = true;
        }
    }

    // ���ڸ� ã��, �ε�����, �� ���Ѵ�
    int num = 0, index = 0;
    for (int i = 0; i < 3; i++) {
        if(v[i].second == true) {
            num = stoi(v[i].first);
            index = i;
            break;
        }
    }
    // ���� ��� �� ���ϱ�
    int number = 0;         // ���� ����
    if (index == 0)
        number = num + 3;
    else if (index == 1)
        number = num + 2;
    else if (index == 2)
        number = num + 1;

    // // �����
    // cout << "index : " << index << endl;
    // cout << "number : " << number << endl;

    // number FizzBuzz �Ǻ�
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "FizzBuzz" << endl;
    }
    else if (number % 3 == 0) {
        cout << "Fizz" << endl;
    }
    else if (number % 5 == 0) {
        cout << "Buzz" << endl;
    }
    else {
        cout << number << endl;
    }

}

// �Լ� ����