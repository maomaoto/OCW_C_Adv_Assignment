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

    作法：
        F(Xs, Ys) = min(在S點所有可能動作, 比如走到Z (F(Xz, Yz)) )

        list triedPositions;
        History[100][100];
        int F(x, y) {
            if (History[x][y] != -1)
                return History[x][y];
            if (x,y = Xe, Ye)
                return 0;

            list = getLegalMoves(x, y);
            for each move in list{
                做動作(move)
                Add move in triedPositions;
                R = 1 + min(F(move之後的坐標))
                撤銷動作(move)
                Remove move in triedPositions;
            }
            return R;
        }

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){



    return 0;
}
