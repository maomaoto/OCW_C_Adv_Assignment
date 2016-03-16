/*
    Homework 1-3 �o���έp
    �y�z�G
        ���@�Ӥp�������b�t�ΡA�����p�U�\��G
        (1) �έp�C�H�ҳ��o�����`����
        (2) �έp�C���o�����`����
        �N���t��²�Ʀp�U�G���]�o�����O�@�� A, B, C �T��; �@�@�� 3 �ӤH�AID ���O�� 1, 2, 3�C
    ��J�G
        �t�ο�J�]�t�T��A�C��Ĥ@�ӤH���H��ID(��ΡA1��2��3)�A�ĤG�ӼƬ��o���`�i��(�i�Ƥ��W�L100)�A
        ����O�h�ӵo�����O(�r�ŧΡAA��B��C)�M�����o�����B(���ׯB�I�ΡA���W�L1000.0)�C
    ��X�G
        ��X�]�t����A�e�T�欰�C�H(��ID�Ѥp��j��X)�ҳ��o���`����(�O�d���p��)�A
        ��T�欰�C���o�����`����(�O�d���p��)�C
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
