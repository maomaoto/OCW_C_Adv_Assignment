/*
    Homework 3-1 計算矩陣邊緣
    描述：
        輸入一個整數矩陣，計算位於矩陣邊緣的元素之和。所謂矩陣邊緣的元素，就是第一行和最後一行的元素
        以及第一列和最後一列的元素。
    輸入：
        第一行為整數k，表示有k組數據。
        每組數據有多行組成，表示一個矩陣。
        第一行分別為短陣的行數 m 和列數 n，(n < 100, m < 100)，兩者之間以空格分隔。
        接下來輸入的 m 行數據中，每行包含 n 個整數，整數之間以空格分隔。
    輸出：
        輸出對應矩陣的邊緣元素和，一行一個。

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;





int main(){

    int k = 0, m = 0, n = 0;
    int mat[100][100] = {{0}};
    int sum  = 0;

    cin >> k;
    for (int i = 0; i<k; i++){
        sum = 0;
        // read matrix
        cin >> m >> n;
        for (int row = 0; row < m; row++){
            for (int col = 0; col < n; col++){
                cin >> mat[row][col];
            }
        }
        for (int col = 0; col < n; col++){
            sum += mat[0][col];     // 第一行
            sum += mat[m-1][col];   // 最後一行
        }
        for (int row = 1; row < m-1; row++){
            sum += mat[row][0];     // 第一列
            sum += mat[row][n-1];   // 最後一列
        }
        cout << sum << endl;

    }

    return 0;
}
