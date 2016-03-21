/*
    Homework 1-4 Tomorrow never knows?
    描述：
        讀入一個格式為yyyy-mm-dd的日期(即年-月-日)，輸出這個日期下一天的日期。
        可以假定輸入的日期不早於1600-01-01，也不晚於2999-12-30。
    輸入：
        輸入僅一行，格式為yyyy-mm-dd的日期
    輸出：
        輸出也僅一行，格式為yyyy-mm-dd的日期

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
