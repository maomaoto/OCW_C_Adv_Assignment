/*
    Homework 5-3 運算符判定
    描述：
        兩個整數 a 和 b 運算後得到結果 c。表示為 a ? b = c，其中 ? 可能是加法 +，減法 -，乘法 *，
        整除 /，或 取余 %。
        請根據輸入的 a, b, c 的值，確定運算符。
        如果某種運算成立，則輸出相應的運算符，如果任何運算都不成立，則輸出 error。
    輸入：
        a,b,c的值在一行內輸入，以逗號間隔
    輸出：
        五個運算符之一或 error

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int a = 0, b = 0, c = 0;
    char temp; // for ','
    cin >> a;
    cin >> temp;
    cin >> b;
    cin >> temp;
    cin >> c;

    if ( a + b == c) cout << '+' << endl;
    else if ( a - b == c) cout << '-' << endl;
    else if ( a * b == c) cout << '*' << endl;
    else if ( a % b == c) cout << '%' << endl;
    else if ( a % b == 0 && a / b == c) cout << '/' << endl;
    else cout << "error" << endl;

    return 0;
}
