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



int main(){

    double id[3] = {0}; // 3�ӤH�U�Φh�ֿ�
    double type[3] = {0};   // 3���o���U�h�ֿ�
    int tempCount = 0;  // �@�ӤH���X�i�o��
    int tempID = 0; // �ثe�OŪ���ӤH���o��
    char tempType = '\0';   // �ثe�OŪ���������o��
    double tempMoney = 0;   // �ثeŪ�J�o�������B

    // �@���T��
    for (int i = 0; i<3; i++){
        cin >> tempID >> tempCount;
        for (int j = 0; j<tempCount; j++){
            cin >> tempType >> tempMoney;
            id[tempID-1] += tempMoney;  //�[�쨺�ӤH�����B
            switch (tempType){
                case 'A':   // �[�� A ���o�����B
                    type[0] += tempMoney;
                    break;
                case 'B':   // �[�� B ���o�����B
                    type[1] += tempMoney;
                    break;
                case 'C':   // �[�� C ���o�����B
                    type[2] += tempMoney;
                    break;
            }
        }
    }


    cout << fixed << setprecision(2) << "1 " << id[0] << endl;
    cout << fixed << setprecision(2) << "2 " << id[1] << endl;
    cout << fixed << setprecision(2) << "3 " << id[2] << endl;
    cout << fixed << setprecision(2) << "A " << type[0] << endl;
    cout << fixed << setprecision(2) << "B " << type[1] << endl;
    cout << fixed << setprecision(2) << "C " << type[2] << endl;

    return 0;
}
