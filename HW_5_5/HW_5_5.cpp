/*
    Homework 5-5 走路迷宮
    描述：
        當你站在一個迷宮裡的時候，往往會被錯綜複雜的道路弄得失去方向感，如果你能得到迷宮地圖，事情就會變得非常簡單。
        假設你已經得到了一個 n*m 的迷宮圖紙，請你找出從起點到出口的最短路。
    輸入：
        第一行是兩個整數 n 和 m ( 1 <= n,m <= 100)，表示迷宮的行數和列數。
        接下來 n 行，每行一個長為 m 的字符串，表示整個迷宮的布局。
        字符'.'表示空地，'#'表示牆，'S'表示起點，'T'表示出口。
    輸出：
        輸出從起點到出口最少需要走的步數。(你不能超出迷宮外)

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int num = 0;
    int point[100][2] = {{0}};

    int extPos[100] = {0};  // 記錄極大點
    int extNum = 0; // 極大點的數目

    int min = -1;
    int minPos = 0;

    bool flag = true;

    // read data
    cin >> num;
    for (int i =0; i<num; i++){
        cin >> point[i][0] >> point[i][1];
    }

    for (int i = 0; i<num; i++){
        // 第 i 個點和其他所有點比較
        for (int j = 0; j<num; j++){
            if (i != j){
                //如果第 i 個點被任何一個點支配，將flag改成false，並跳出
                if (point[i][0] <= point[j][0] && point[i][1] <= point[j][1]){
                    flag = false;
                    break;
                }
            }
        }
        // 如果全部的點都比較過後，flag還是true，表示第 i 個點沒有被任何點支配，那他就是極大點
        if (flag == true){
            extPos[extNum] = i;
            extNum++;
        }
        // reset flag
        flag = true;
    }

    // x由小到大，打印出極大點
    for (int j = 0; j < extNum; j++){
        // 找最小的x值
        for (int i = 0; i < extNum; i++){
            if (extPos[i] >= 0){    // 表示這個點還沒被取走
                if (min < 0){   // 第一個值，直接assign
                    min = point[extPos[i]][0];
                    minPos = i;
                } else {
                    if (point[extPos[i]][0] < min){
                        min = point[extPos[i]][0];
                        minPos = i;
                    }
                }
            }
        }
        cout << '(' << point[extPos[minPos]][0] << ',' << point[extPos[minPos]][1] << ')';
        if (j < extNum -1) cout << ',';
        else cout << endl;

        // reset data
        extPos[minPos] = -1;    // 已經打印過的點清成-1
        min = -1;

    }


    return 0;
}
