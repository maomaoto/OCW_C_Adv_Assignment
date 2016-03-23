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

    int point[100][2] = {{0}};



    return 0;
}
