/*
    Homework 5-2 字符串中次數第2多的字母
    描述：
        輸入一串長度不超過500個符號的字符串，輸出在串中第2多的英語字母(大小寫字母認為相同)和次數。
        (如果串中有其他符號，則忽略不考慮)。如果有多個字母的次數都是第2多，則按串中字母出現的順序輸出第1個。
    輸入：
        一個字符串
    輸出：
        大寫字母+小寫字母:個數

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
#include <cctype>
using namespace std;

int main(){

    char input[501] = {'\0'};

    char alpha[26] = {'\0'};
    int count[26] = {0};
    int alphaNum = 0;   // Number of alphabets



    cin >> input;

    // count alphabet
    for (int i = 0; input[i] != '\0'; i++){
        if (isalpha(input[i])) {
            char temp = toupper(input[i]);
            bool found = false;
            for (int j = 0; j < alphaNum; j++){
                if (temp == alpha[j]) {
                    count[j]++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                alpha[alphaNum] = temp;
                count[alphaNum]++;
                alphaNum++;
            }
        }
    }

    // find second large
    int max = 0, maxPos = 0, second = 0, secPos = 0;
    for (int i = 0; i < alphaNum; i++){
        if (count[i] > max){
            second = max;
            secPos = maxPos;
            max = count[i];
            maxPos = i;
        } else if (count[i] == max){
            continue;
        } else if (count[i] > second){
            second = count[i];
            secPos = i;
        }
    }

    cout << alpha[secPos] << '+' << (char)tolower(alpha[secPos]) << ':' << count[secPos] << endl;

    return 0;
}
