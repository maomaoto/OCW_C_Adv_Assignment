/*
    Homework 5-4 尋找平面上的極大點
    描述：
        在一個平面上有兩個點 (x, y), (a, b)。如果說(x,y)支配了(a,b)，這是指 x >= a, y >= b。
        用圖形來看就是(a,b)座落在以(x, y)為右上角的一個無限的區域內。
        給定 n 個點的集合，一定存在若干個點，它們不會被集合中的任何一點所支配，這些點叫做極大值點。
        編程找出所有的極大值點，按照 x 坐標由小到大，輸出極大點的座標。
        本題規定： n 不超過100，並且不考慮點的坐標為負數的情況。
    輸入：
        輸入包括兩行，第一行是正整數 n ，表示點數。
        第二行包含 n 個點的座標，坐標值都是整數，坐標範圍從 0 到100，輸入數據中不存在坐標相同的點。
    輸出：
        按 x 軸座標最小到大的順序輸出所有極大點。
        輸出格式為 (x1,y1),(x2,y2),...(xk,yk)
        注意：輸出的每個點之間有","分隔，最後一個點之後沒有","，少輸出和多輸出都會被判錯。

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
