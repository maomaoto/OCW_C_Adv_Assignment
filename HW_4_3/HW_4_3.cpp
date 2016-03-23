/*
    Homework 4-3 尋找山頂
    描述：
        在一個 m*n 的山地上，已知每個地塊的平均高程，請求出所有山頂所在的地塊。
        (所謂山頂，就是其地塊平均高程不比其上下左右相鄰的四個地塊每個地塊的平均高程小的地方。)
    輸入：
        第一行是兩個整數，表示山地的長 m (5 <= m <= 20)和寬 n (5 <= n <= 20)。
        其後 m 行為一個 m*n 的整數矩陣，表示每個地塊的平均高程。每行的整數間用一個空格分隔。
    輸出：
        輸出所有山頂所在地塊的位置。每行一個，按先 m 值從小到大，再 n值從小到大的順序輸出。

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int m = 0, n = 0;
    int land[20][20] = {{0}};
    bool up = true, down = true, left = true, right = true;

    cin >> m >> n;
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            cin >> land[i][j];
        }
    }

    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            if ( (i-1 >= 0) && land[i][j] < land[i-1][j]) up = false;
            if ( (i+1 < m) && land[i][j] < land[i+1][j]) down = false;
            if ( (j-1 >= 0) && land[i][j] < land[i][j-1]) left = false;
            if ( (j+1 < n) && land[i][j] < land[i][j+1]) right = false;
            if (up && down && left && right) cout << i << ' ' << j << endl;
            up = true;
            down = true;
            left = true;
            right = true;
        }
    }


    return 0;
}
