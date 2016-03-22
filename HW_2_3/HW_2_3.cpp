/*
    Homework 2-3 排隊遊戲
    描述：
        在幼兒園中，老師安排小朋友做一個排隊的遊戲。
        首先老師精心的把數目相同的小男孩和小女孩編排在一個隊列中，每個小孩按其在隊列中的位置發給一個編號
        (編號從0開始)。然後老師告訴小朋友們，站在前邊的小男孩可以和他後邊相鄰的小女孩手拉手離開隊列，
        剩餘的小朋友重新站攏，再按前後相鄰的小男孩小女孩手拉手離開隊列遊戲，如此往複。
        由於教師精心的安排，恰好可以保證每兩個小朋友都能手拉手離開隊列，並且最後離開的兩個小朋友是編號最小的
        和編號最大的兩個小朋友。
        (注：只有小男孩在前，小女孩在後，且他們兩個之間沒有其他小朋友，他們才能手拉手離開隊列。)
        請根據老師的排隊，按小女孩編號從小到大的順序，給出所有手拉手離開隊列的小男孩和小女孩的編號對。
    輸入：
        用一串字符代表小朋友隊列。字符串中只會出現兩個字符(樣例輸入裡用的是括號，但實際數據則不一定)，
        分別代表小男孩和小女孩，首先出現的字符代表小男孩，另一個字符代表小女孩。
        小孩總數不超過100。
    輸出：
        按小女孩編號順序，順序輸出手拉手離開隊列的小男孩和小女孩的編號對，每行一對編號，
        編號之間用一個空格分隔。

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;

void match(char in[], int num[], char boy, char girl){
    char nextIn[101] = {'\0'};
    int nextNum[101] = {0};

    for (int i = 0; in[i] != '\0'; i++){
        if ( (in[i] == girl) && (in[i-1] == boy)){
            cout << num[i-1] << ' ' << num[i] << endl;
            // remove i and i-1 element
            if ( i != 1){   // not last couple
                for (int j = 0; j < i-1; j++){
                    nextIn[j] = in[j];
                    nextNum[j] = num[j];
                }
                for (int j = i+1; in[j] != '\0'; j++){
                    nextIn[j-2] = in[j];
                    nextNum[j-2] = num[j];
                }
            }
            match(nextIn, nextNum, boy, girl);
            break;
        }

    }

}


int main(){

    char input[101] = {'\0'};   // store queue
    int num[101] = {0}; // store number
    char boy = '\0';
    char girl = '\0';

    cin.getline(input, 100);
    // find corresponding symbol
    boy = input[0];
    for (int i = 1; input[i] != '\0'; i++){
        if (input[i] != boy) {
            girl = input[i];
            break;
        }
    }
    for (int i = 0; input[i] != '\0'; i++){
        num[i] = i;
    }


    match(input, num, boy, girl);

    return 0;
}
