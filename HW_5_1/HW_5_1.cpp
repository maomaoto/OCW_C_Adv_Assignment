/*
    Homework 5-1 �� k �� 3 �Ĕ�
    ������
        ݔ��ɂ������� m �� k������ 1 < m < 100000��1 < k < 5���Д� m �ܷ� 19 ��������ǡ�ú��� k ��3��
        ����M��l�����tݔ��YES����t��ݔ��NO��
    ݔ�룺
        m �� k ��ֵ���ո��g����
    ݔ����
        �M��l���rݔ��YES�����M��rݔ��NO��

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int m = 0, k = 0;
    int count = 0;

    cin >> m >> k;

    if ( m % 19 == 0){
        if ( m / 10000 == 3 ) count += 1;
        m %= 10000;
        if ( m / 1000 == 3 ) count += 1;
        m %= 1000;
        if ( m / 100 == 3 ) count += 1;
        m %= 100;
        if ( m / 10 == 3 ) count += 1;
        m %= 10;
        if ( m == 3) count += 1;
        if (count == k) cout << "YES" << endl;
        else cout << "NO" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
