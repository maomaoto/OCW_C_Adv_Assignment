/*
    Homework 2-2 角谷猜想(又名Collatz conjecture)
    描述：
        所謂角谷猜想，是指對任意一個正整數，如果是奇數，則乘3加1，如果是偶數，則除以2，
        得到的結果再按照上述規則重複處理，最終總能夠得到1。
        程序要求輸入一個整數，將經過處理得到1的過程輸出來。
    輸入：
        一個正整數
    輸出：
        從輸入整數到1的過程，每一步為一行，每一步中描述計算過程。
        最後一行輸出"End"，如果輸入為1，直接輸出"End"。

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;

void Collatz(int n){
    if (n == 1) cout << "End" << endl;
    else if (n % 2 == 1){
        cout << n << "*3+1=" << n*3+1 << endl;
        Collatz(n*3+1);
    } else {
        cout << n << "/2=" << n/2 << endl;
        Collatz(n/2);
    }

}


int main(){

    int n = 0;
    cin >> n;
    Collatz(n);
    return 0;
}
