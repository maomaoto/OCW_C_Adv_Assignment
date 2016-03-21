/*
    Homework 1-6 流感傳染
    描述：
        有一批易感人群住在網格狀的宿舍區內，宿舍區為 n*n 的矩陣，每個格點為一個房間，房間裡可能住人，
        也可能空著。在第一天，有些房間裡的人得了流感，以後每天，得流感的人會使其鄰居傳染上流感，
        (已經得病的不變)，空房間不會傳染。請輸入第 m 天得流感的人數。
    輸入：
        第一行一個數字 n，n 不超過100，表示有 n*n 的宿舍房間。
        接下來的 n 行，每行 n 個字符， '.'表示第一天該房間住著健康的人， '#'表示該房間空著，
        '@'表示第一天該房間住著得流感的人。
        接下來的一行是一個整數 m，m 不超過100。
    輸出：
        輸出第 m 天，得流感的人數。

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;



int main(){
    // dormitory 0:empty, 1:healthy, 2:sick
    int dorm[100][100] = {{0}};
    int dormNext[100][100] = {{0}};

    char temp = '\0';
    int n = 0;  // n*n dorm
    int m = 0;  // m days
    int sick = 0; // number of sick person

    // read n
    cin >> n;
    getchar();   // read CRLF

    // read dormitory
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            temp = getchar();
            switch(temp){
                case '#':
                    dorm[i][j] = 0;
                    dormNext[i][j] = 0;
                    break;
                case '.':
                    dorm[i][j] = 1;
                    dormNext[i][j] = 1;
                    break;
                case '@':
                    dorm[i][j] = 2;
                    dormNext[i][j] = 2;
                    break;
            }
        }
        getchar();   // read CRLF
    }

    // read m days
    cin >> m;

    // m-1 days iteration
    for (int day = 0; day < m-1 ; day++){
        // visit dorm
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                // if find sick person
                if (dorm[i][j] == 2){
                    if ( (i > 0) && (dorm[i-1][j] == 1) ) dormNext[i-1][j] = 2;   //UP
                    if ( (i < n-1) && (dorm[i+1][j] == 1) ) dormNext[i+1][j] = 2; //DOWN
                    if ( (j > 0) && (dorm[i][j-1] == 1) ) dormNext[i][j-1] = 2;   //LEFT
                    if ( (j < n-1) && (dorm[i][j+1] == 1) ) dormNext[i][j+1] = 2; //RIGHT
                }
            }
        }
        // copy dormNext to drom
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                dorm[i][j] = dormNext[i][j];
            }
        }
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            //cout << dorm[i][j];
            if (dorm[i][j] == 2) sick++;
        }
        //cout << endl;

    }

    cout << sick << endl;


    return 0;
}
