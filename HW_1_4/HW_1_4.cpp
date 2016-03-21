/*
    Homework 1-4 Tomorrow never knows?
    ������
        �x��һ����ʽ��yyyy-mm-dd������(����-��-��)��ݔ���@��������һ������ڡ�
        ���Լٶ�ݔ������ڲ����1600-01-01��Ҳ�����2999-12-30��
    ݔ�룺
        ݔ��Hһ�У���ʽ��yyyy-mm-dd������
    ݔ����
        ݔ��Ҳ�Hһ�У���ʽ��yyyy-mm-dd������

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;



int main(){
    // store input date
    int yearIn = 0;
    int monthIn = 0;
    int dayIn = 0;
    // store output date
    int yearOut = 0;
    int monthOut = 0;
    int dayOut = 0;
    // store days of each month
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // temp char for reading
    //char temp = '\0';

    // read input date
    cin >> yearIn;
    getchar();   // read '-'
    cin >> monthIn;
    getchar();   // read '-'
    cin >> dayIn;

    // leap year
    if (yearIn % 4 == 0){
        if (yearIn % 100 != 0){
            days[2] = 29;
        } else {
            if (yearIn % 400 == 0){
                days[2] = 29;
            }
        }
    }

    if (dayIn == days[monthIn]){
        dayOut = 1;
        if (monthIn == 12){
            monthOut = 1;
            yearOut = yearIn +1;
        } else {
            monthOut = monthIn +1;
            yearOut = yearIn;
        }
    } else {
        dayOut = dayIn +1;
        monthOut = monthIn;
        yearOut = yearIn;
    }


    cout << setfill('0') << setw(4) << yearOut << '-' << setw(2) << monthOut << '-' << setw(2) << dayOut << endl;
    return 0;
}
