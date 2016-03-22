/*
    Homework 2-1 單詞翻轉
    描述：
        輸入一個句子(一行)，將句子中的每一個單詞翻轉後輸出。
    輸入：
        只有一行，為一個字符串，不超過500個字符。單詞之間以空格隔開。
        所謂單詞指的是所有不包含空格的連續的字符。
        這道題請用cin.getline()輸入一行後再逐個單詞遞歸處理。
    輸出：
        翻轉每一個單詞後的字符串，單詞之間的空格需與原文一致。

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;

void reverse(char in[], int pos){
    if (in[pos] == ' '){
        // 如果是空格，直接輸出，並把位置往後移一格
        cout << in[pos];
        reverse(in, pos+1);
    } else if (in[pos] != '\0') {
        // 如果不是空格，也不是結尾符號，尋找單詞並反序打印
        // 把位置移到單詞尾端的下一個字符
        int nextPos = pos;
        for (int i = pos; in[i] != '\0'; i++){
            if (in[i] == ' ') break;
            nextPos = i;
        }
        for (int i = nextPos; i >= pos; i--) cout << in[i];
        reverse(in, nextPos+1);
    }

}


int main(){

    char input[501] = {'\0'};
    cin.getline(input, 500);
    reverse(input, 0);
    return 0;
}
