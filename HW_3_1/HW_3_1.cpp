/*
    Homework 3-1 Ӌ����߅��
    ������
        ݔ��һ��������ꇣ�Ӌ��λ춾��߅����Ԫ��֮�͡����^���߅����Ԫ�أ����ǵ�һ�к�����һ�е�Ԫ��
        �Լ���һ�к�����һ�е�Ԫ�ء�
    ݔ�룺
        ��һ�О�����k����ʾ��k�M������
        ÿ�M�����ж��нM�ɣ���ʾһ����ꇡ�
        ��һ�зքe���ꇵ��Д� m ���Д� n��(n < 100, m < 100)������֮�g�Կո�ָ���
        ����ݔ��� m �Д����У�ÿ�а��� n ������������֮�g�Կո�ָ���
    ݔ����
        ݔ��������ꇵ�߅��Ԫ�غͣ�һ��һ����

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;


int main(){

    int k = 0, m = 0, n = 0;
    int mat[105][105] = {{0}};
    int sum = 0;

    cin >> k;
    for (int i = 0; i<k; i++){
        sum = 0;
        // read matrix
        cin >> m >> n;
        for (int row = 0; row < m; row++){
            for (int col = 0; col < n; col++){
                cin >> mat[row][col];
            }
        }

        for (int col = 0; col < n; col++){
            sum += mat[0][col];     // ��һ��
            if (m-1 != 0) sum += mat[m-1][col];   // ����һ��
        }

        for (int row = 1; row < m-1; row++){
            sum += mat[row][0];     // ��һ��
            if (n-1 != 0) sum += mat[row][n-1];   // ����һ��
        }
        cout << sum << endl;

        // clear matrix
        for (int row = 0; row < m; row++){
            for (int col = 0; col < n; col++){
                mat[row][col] = 0;
            }
        }

    }

    return 0;
}
