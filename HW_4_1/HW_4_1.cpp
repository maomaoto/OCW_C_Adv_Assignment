/*
    Homework 4-1 分配病房
    描述：
        要求設計一個程序，給病人安排好病房。疾病的嚴重程序用0到10來表示，0表示小毛病，10表示非常嚴重。
    輸入：
        第一行輸入病人的個數 m (m < 50)，以及安排住入重症病房的最低嚴重值 a。
        緊接著 m 行，每行表示病人編號(三位數，用0補齊)及其疾病的嚴重程度(浮點數，1位小數)。
        每個病人的疾病嚴重程度都不一樣。
    輸出：
        要求按照病人的嚴重程度輸出住在重症病房裡的病人編號。
        注意：如果當前所有病人的嚴重程度並不滿足住在重症病房裡，則輸出"None"(不包含引號)。

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int m = 0;
    double a = 0;
    int person[50] = {0};
    double level[50] = {0};
    int severe = 0; // store number of severe patients
    double max = 0;
    int maxPos = 0;

    // read data
    cin >> m >> a;
    for (int i = 0; i<m; i++){
        cin >> person[i] >> level[i];
        if (level[i] > a) severe++;
    }

    if (severe == 0) cout << "None." << endl; // if no severe patient
    else {
        for (int i = 0; i < severe; i++){
            // find most severe
            for (int j = 0; j < m; j++){
                if (level[j] > max){
                    max = level[j];
                    maxPos = j;
                }
            }
            cout << setfill('0') << setw(3) << person[maxPos] << ' ' << fixed << setprecision(1) << level[maxPos] << endl;
            person[maxPos] = 0;
            level[maxPos] = 0;
            max = 0;
            maxPos = 0;
        }
    }


    return 0;
}
