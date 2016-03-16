/*
    Homework 1-3 發票統計
    描述：
        有一個小型的報帳系統，它有如下功能：
        (1) 統計每人所報發票的總錢數
        (2) 統計每類發票的總錢數
        將此系統簡化如下：假設發票類別共有 A, B, C 三種; 一共有 3 個人，ID 分別為 1, 2, 3。
    輸入：
        系統輸入包含三行，每行第一個人為人員ID(整形，1或2或3)，第二個數為發票總張數(張數不超過100)，
        之後是多個發票類別(字符形，A或B或C)和相應發票金額(單精度浮點形，不超過1000.0)。
    輸出：
        輸出包含六行，前三行為每人(按ID由小到大輸出)所報發票總錢數(保留兩位小數)，
        後三行為每類發票的總錢數(保留兩位小數)。
*/

#include <iostream>
#include <iomanip>
using namespace std;

int judge(int a[], int b[], int n){
    // 比較 a 和 b的各元素，輸出相同元素的個數。
    int result = 0;
    for (int i = 0; i < n; i++){
        result += (a[i] == b[i]);
    }
    return result;
}

int main(){
    // 4個人說的大小
    int a[4] = {3,1,0,4};
    int b[4] = {2,4,3,1};
    int c[4] = {0,3,0,4};
    int d[4] = {1,3,4,2};

    int exp[4] = {0};

    // 遍歷各種組合
    for (int i = 1; i <=4; i++){
        exp[0] = i;
        for (int j = 1; j <=4; j++){
            if (i != j){
                exp[1] = j;
                for (int k = 1; k <=4; k++){
                    if ( (k != i) && (k != j)){
                        exp[2] = k;
                        exp[3] = 10-i-j-k;
                        // 4個人說的話各只有答對一個
                        if (judge(a, exp, 4) != 1) continue;
                        if (judge(b, exp, 4) != 1) continue;
                        if (judge(c, exp, 4) != 1) continue;
                        if (judge(d, exp, 4) != 1) continue;
                        // 如果執行到這，表示找到一組答案，打印出來
                        for (int l = 0; l < 4; l++) cout << exp[l] << endl;
                    }
                }
            }
        }
    }
    return 0;
}
