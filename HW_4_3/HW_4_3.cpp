/*
    Homework 4-3 ����ɽ�
    ������
        ��һ�� m*n ��ɽ���ϣ���֪ÿ���؉K��ƽ���̣߳�Ո�������ɽ����ڵĵ؉K��
        (���^ɽ픣�������؉Kƽ���̲߳��������������������Ă��؉Kÿ���؉K��ƽ���߳�С�ĵط���)
    ݔ�룺
        ��һ���ǃɂ���������ʾɽ�ص��L m (5 <= m <= 20)�͌� n (5 <= n <= 20)��
        ���� m �О�һ�� m*n ��������ꇣ���ʾÿ���؉K��ƽ���̡߳�ÿ�е������g��һ���ո�ָ���
    ݔ����
        ݔ������ɽ����ڵ؉K��λ�á�ÿ��һ�������� m ֵ��С������ nֵ��С��������ݔ����

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int m = 0, n = 0;
    int land[20][20] = {{0}};
    bool up = true, down = true, left = true, right = true;

    cin >> m >> n;
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            cin >> land[i][j];
        }
    }

    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            if ( (i-1 >= 0) && land[i][j] < land[i-1][j]) up = false;
            if ( (i+1 < m) && land[i][j] < land[i+1][j]) down = false;
            if ( (j-1 >= 0) && land[i][j] < land[i][j-1]) left = false;
            if ( (j+1 < n) && land[i][j] < land[i][j+1]) right = false;
            if (up && down && left && right) cout << i << ' ' << j << endl;
            up = true;
            down = true;
            left = true;
            right = true;
        }
    }


    return 0;
}
