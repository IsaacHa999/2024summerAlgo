// boj 9663 N-Queen
#include <iostream>
#include <cmath>
using namespace std;
int col[16];
int n;
int ans = 0;
void queen(int x){
    if(n == x){
        ans++; // ī��Ʈ +1
    }else{
        for (int i = 0; i < n;i++){
            col[x] = i; // ���� ��ġ�� ����
            bool can = true;
            for (int j = 0; j < x;j++){
                if(col[x] == col[j] || abs(col[x] - col[j]) == x - j){
                    //���� ��ġ�� ���� ���� ���� �浹�ϴ� �� Ȯ��
                    // 1. ���� �࿡ �ִ°�
                    // 2. �밢���� �ִ°�
                    can = false; //�浹�ϸ� �ٸ� ���� ��ġ�� ���ƾ���
                    break;
                }
            }
            if(can){ // �浹���� �ʴ´ٸ� ���� ������ �Ѿ.
                queen(x + 1);
            }
        }
    }
} //��Ʈ��ŷ

int main(){
    cin >> n;
    queen(0);
    cout << ans;
    return 0;
} // 1.5h
