/*
    Homework 3-2 ���S���M�������±�v
    ������
        �o��һ�� row �� col �е��������M array��Ҫ��� array[0][0] Ԫ���_ʼ��
        �����ϵ����µČ��Ǿ�����v�������M��
    ݔ�룺
        ݔ��ĵ�һ���Ѓɂ����������Ξ�row��col��
        �N���� row �У�ÿ�а��� col ������������һ�����S�������M��
        (ע��ݔ��� row �� col ���C 0 < row < 100, 0 < col < 100)
    ݔ����
        ����v���ݔ��ÿ��������ÿ��������һ�С�

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;





int main(){

    int row = 0, col = 0;
    int mat[100][100] = {{0}};

    cin >> row >> col;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> mat[i][j];
        }
    }

    for (int sum = 0; sum < row + col -1; sum++){
        for (int i = 0; i <= sum; i++){
            if ( (i < row) && (sum-i < col))
            cout << mat[i][sum-i] << endl;
        }
    }

    return 0;
}
