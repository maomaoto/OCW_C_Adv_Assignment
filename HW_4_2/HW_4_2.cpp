/*
    Homework 4-2 配對碱基鏈
    描述：
        脫氧核醣核酸(DNA)由兩條互補的碱基鏈以雙螺旋的方式結合而成。而構成DNA的碱基共有四種，
        分別為腺嘌呤(A)、鳥嘌呤(G)、胸腺嘧啶(T)和胞嘧啶(C)。我們知道，在兩條互補碱基鏈的對應位置上，
        腺嘌呤總是和胸腺嘧啶配對，鳥嘌呤總是和胞嘧啶配對。
        你的任務就是根據一條單鏈上的碱基序列，給出對應的互補鏈上的碱基序列。
    輸入：
        第一行是一個正整數 n，表明共有 n 條要求解的碱基鏈。
        以下共有 n 行，每行用一個字符串表示一條碱基鏈。這個字符串只含有大寫字母A、T、G、C，
        分別表示腺嘌呤、胸腺嘧啶、鳥嘌呤和胞嘧啶。每條碱基鏈的長度都不超過255。
    輸出：
        共有 n 行。
        每行為一個只含有大寫字母A, T, G, C 的字符串。分別為與輸入的各碱基鏈互補的碱基鏈。

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int n = 0;
    char seq[256] = {'\0'};

    cin >> n;
    getchar();

    for (int i = 0; i < n; i++){
        cin.getline(seq, 256);
        for (int j = 0; seq[j] != '\0'; j++){
            switch(seq[j]){
                case 'A':
                    cout << 'T';
                    break;
                case 'T':
                    cout << 'A';
                    break;
                case 'C':
                    cout << 'G';
                    break;
                case 'G':
                    cout << 'C';
                    break;
            }
        }
        cout << endl;
    }

    return 0;
}
