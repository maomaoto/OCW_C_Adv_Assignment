/*
    Homework 3-2 二維數組右上左下遍歷
    描述：
        給定一個 row 行 col 列的整數數組 array，要求從 array[0][0] 元素開始，
        按左上到右下的對角線順序遍歷整個數組。
    輸入：
        輸入的第一行有兩個整數，依次為row和col。
        餘下有 row 行，每行包含 col 個整數，構成一個二維整數數組。
        (注：輸入的 row 和 col 保證 0 < row < 100, 0 < col < 100)
    輸出：
        按遍歷順序輸出每個整數，每個整數佔一行。

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;





int main(){

    int row = 0, col = 0;
    int mat[100][100] = {{0}};

    cin >> row >> col;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> mat[i][j];
        }
    }

    for (int sum = 0; sum < row + col -1; sum++){
        for (int i = 0; i <= sum; i++){
            if ( (i < row) && (sum-i < col))
            cout << mat[i][sum-i] << endl;
        }
    }

    return 0;
}
