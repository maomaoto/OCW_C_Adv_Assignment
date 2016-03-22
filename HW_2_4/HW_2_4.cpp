/*
    Homework 2-4 括號匹配問題
    描述：
        在某個字符串(長度不超過100)中有左括號、右括號和大小寫字母；規定(與常見的算數式子一樣)
        任何一個左括號都從內到外與右邊且距離最近的右括號匹配。
        寫一個程序，找到無法匹配的左括號和右括號，輸出原來字串，並且在下一行標示出不能匹配的括號。
        不能匹配的左括號用'$'標注，不能匹配的右括號用'?'標注。
    輸入：
        輸入包括多組數據，每組數據一行，包含一個字符串，只包含左右括號和大小寫字母，字符串長度不超過100
        注意：cin.getline(str, 100)最多只能輸入99個字符。
    輸出：
        對每組輸入數據，輸出兩行，第一行包含原始輸入字符，第二行由'$', '?'和空格組成，
        '$'和'?'表示與之對應的左括號和右括號不匹配。

*/

#include <iostream>
//#include <iomanip>
//#include <cstdio>   // for getchar()
using namespace std;

// 找右括號
int findRight(char *ptrIn, char *ptrMark, int pos ){
    for (int i = pos; ptrIn[i] != '\0'; i++){
        if (ptrIn[i] == '(' ){
            // 如果還是找到左括號，再從下一位置開始找右括號
            int match = findRight(ptrIn, ptrMark, i+1);
            if (match != 0) ptrMark[i] = ' ';
            i= match;
        }
        if (ptrIn[i] == ')'){
            // 如果找到右括號，將mark變成空白，並且回傳位置
            ptrMark[i] = ' ';
            return i;
        }
    }
    // 找到結尾沒有右括號，回傳0
    return 0;
}

// 找左括號
void findLeft(char *ptrIn, char *ptrMark, int pos ){
    for (int i = pos; ptrIn[i] != '\0'; i++){
        if (ptrIn[i] == '(' ){
            // 如果找到左括號，從下一位置開始找右括號
            int match = findRight(ptrIn, ptrMark, i+1);
            // 找到右括號了，將尋找的位置移到右括號的下一個位置
            if (match != 0) {
                ptrMark[i] = ' ';
                i = match;
            }
        }
    }
}




int main(){

    char input[102] = {'\0'};
    char mark[102] = {'\0'};
    char *ptrIn = input;
    char *ptrMark = mark;
    cin.getline(input, 101);
    // add all marks
    for (int i = 0; input[i] != '\0'; i++){
        if (input[i] == '(') mark[i] = '$';
        else if (input[i] == ')') mark[i] = '?';
        else mark[i] = ' ';
    }


    findLeft(ptrIn, ptrMark, 0);
    // 打印結果
    cout << input << endl;
    cout << mark << endl;




    return 0;
}
