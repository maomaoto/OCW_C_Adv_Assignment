/*
    Homework 5-1 今 k 個 3 的數
    描述：
        輸入兩個正整數 m 和 k，其中 1 < m < 100000，1 < k < 5，判斷 m 能否被 19 整除，且恰好含有 k 個3。
        如果滿足條件，則輸出YES，否則，輸出NO。
    輸入：
        m 和 k 的值，空格間隔。
    輸出：
        滿足條件時輸出YES，不滿足時輸出NO。

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
