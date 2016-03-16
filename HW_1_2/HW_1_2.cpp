/*
    Homework 1-2 四大湖
    描述：
        我國有四大淡水湖。
        A 說: 洞庭湖最大，洪澤湖最小，鄱陽湖第三。
        B 說: 洪澤湖最大，洞庭湖最小，鄱陽湖第二，太湖第三。
        C 說: 洪澤湖最小，洞庭湖第三。
        D 說: 鄱陽湖最大，太湖最小，洪澤湖第二，洞庭湖第三。
        已知這四個湖的大小均不相等，4個人每人僅答對一個。
        這編程按照鄱陽湖、洞庭湖、太湖、洪澤湖的順序給出他們的大小排名。
    輸入：
        無
    輸出：
        輸出為 4 行，第一行為鄱陽湖的大小名次，從大到小名次分別表示為 1、2、3、4。
        第 2、3、4 行分別為洞庭湖、太湖、洪澤湖的大小名次。
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
