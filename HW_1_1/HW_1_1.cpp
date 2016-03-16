/*
    Homework 1-1 尋找下標
    描述：
        已知一個整數數組 x[]，其中的元素彼此都不相同。
        找出給定的數組中是否有一個元素滿足 x[i] = i 的關係，數組下標從 0 開始。
    輸入：
        第一行包含一個整數 n (0 < n < 100)，表示數組中元素的個數。
        第二行包含 n 個整數，依次表示數組中的元素。
    輸出：
        輸出為一個整數，即滿足 x[i] = i 的元素。若有多個元素滿足，輸出第一個滿足的元素。
        若沒有元素滿足，則輸出 'N'。
*/

#include <iostream>
#include <iomanip>
using namespace std;



int main(){

    int n = 0;
    int x[100] = {0};
    bool found = false;

    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x[i];
    }

    for (int i = 0; i < n; i++){
        if (x[i] == i) {
            cout << i << endl;
            found = true;
            break;
        }
    }

    if (!found) cout << 'N' << endl;

    return 0;
}
