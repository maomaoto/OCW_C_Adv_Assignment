/*
    Homework 3-3 文字排版
    描述：
        給一定英文短文，單詞之間以空格分隔(每個單詞包括其前後緊鄰的標點符號)。
        請將短文重新排版，要求如下：
        每個不超過80個字符。
        每個單詞居於同一行上。
        在同一行的單詞間以一個空格分隔。
        行首和行尾都沒有空格

    輸入：
        第一行是個整數 n，表示英文短文中單詞的數目，其後是 n 個以空格分隔的英文單詞。
        (單詞包括其前後緊鄰的標點符號，且每個單詞長度都不太於40個字母。)
    輸出：
        排版後的多行文本，每行文本字符數最多80個字符，單詞之間以一個空格分隔，
        每行文本首尾都沒有空格。

*/

#include <iostream>
//#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int n = 0;  // word count
    char word[41] = {'\0'};
    int pos = 0;
    int length = 0;


    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> word;
        length = strlen(word);
        if (pos+length <= 80){
            for (int j = 0; j < length; j++){
                cout << word[j];
                pos++;
            }
        } else {
            cout << endl;
            pos = 0;
            for (int j = 0; j < length; j++){
                cout << word[j];
                pos++;
            }
        }
        if (pos != 0){
            pos++;
            if (pos == 80){
                cout << endl;
                pos = 0;
            } else {
                cout << ' ';
            }
        }

    }

    return 0;
}
