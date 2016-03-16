/*
    Homework 1-2 �|�j��
    �y�z�G
        �ڰ꦳�|�j�H����C
        A ��: �}�x��̤j�A�x�A��̤p�A�I����ĤT�C
        B ��: �x�A��̤j�A�}�x��̤p�A�I����ĤG�A�Ӵ�ĤT�C
        C ��: �x�A��̤p�A�}�x��ĤT�C
        D ��: �I����̤j�A�Ӵ�̤p�A�x�A��ĤG�A�}�x��ĤT�C
        �w���o�|�Ӵ򪺤j�p�����۵��A4�ӤH�C�H�ȵ���@�ӡC
        �o�s�{���ӾI����B�}�x��B�Ӵ�B�x�A�򪺶��ǵ��X�L�̪��j�p�ƦW�C
    ��J�G
        �L
    ��X�G
        ��X�� 4 ��A�Ĥ@�欰�I���򪺤j�p�W���A�q�j��p�W�����O��ܬ� 1�B2�B3�B4�C
        �� 2�B3�B4 ����O���}�x��B�Ӵ�B�x�A�򪺤j�p�W���C
*/

#include <iostream>
#include <iomanip>
using namespace std;

int judge(int a[], int b[], int n){
    // ��� a �M b���U�����A��X�ۦP�������ӼơC
    int result = 0;
    for (int i = 0; i < n; i++){
        result += (a[i] == b[i]);
    }
    return result;
}

int main(){
    // 4�ӤH�����j�p
    int a[4] = {3,1,0,4};
    int b[4] = {2,4,3,1};
    int c[4] = {0,3,0,4};
    int d[4] = {1,3,4,2};

    int exp[4] = {0};

    // �M���U�زզX
    for (int i = 1; i <=4; i++){
        exp[0] = i;
        for (int j = 1; j <=4; j++){
            if (i != j){
                exp[1] = j;
                for (int k = 1; k <=4; k++){
                    if ( (k != i) && (k != j)){
                        exp[2] = k;
                        exp[3] = 10-i-j-k;
                        // 4�ӤH�����ܦU�u������@��
                        if (judge(a, exp, 4) != 1) continue;
                        if (judge(b, exp, 4) != 1) continue;
                        if (judge(c, exp, 4) != 1) continue;
                        if (judge(d, exp, 4) != 1) continue;
                        // �p�G�����o�A��ܧ��@�յ��סA���L�X��
                        for (int l = 0; l < 4; l++) cout << exp[l] << endl;
                    }
                }
            }
        }
    }
    return 0;
}
