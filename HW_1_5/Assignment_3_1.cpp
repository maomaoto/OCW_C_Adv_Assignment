/*
    Assignment 3-1
    輸入：
        輸入有多行，第一行為整數 n (n<100)，表示有n個培養皿。
        其餘n行，每行有3個整數，分別代表培養皿編號、試驗前細菌數量、試驗後細菌數量。
        假設實驗沒有誤差。

    輸出：
        輸出有多行。
        第一行輸出A亞種培養皿的數量，其後每行輸出A亞種培養皿的編號，按繁殖率升序排列。
        然後一行輸出B亞種培養皿的數量，其後每行輸出B亞種培養皿的編號，也按繁殖率升序排列。
*/

#include <iostream>
using namespace std;
int main(){
    int n; //n為培養皿的數量
    // id記錄培養皿的編號，rate記錄細菌的繁殖率
    int id[100];
    double rate[100];

    cin >> n;
    for (int i = 0; i<n; i++){
        int initial, final;
        cin >> id[i] >> initial >> final;
        rate[i] = (double)final/initial;
    }

    //排序(繁殖率由大到小)
    for (int i = 0; i < n; i++){
        for (int j=0; j < n - i - 1; j++){
            if (rate[j+1] > rate[j]){
                int tmpId = id[j];
                id[j] = id[j+1];
                id[j+1] = tmpId;

                double tmpRate = rate[j];
                rate[j] = rate[j+1];
                rate[j+1] = tmpRate;
            }
        }
    }

    //記錄最大的差
    double maxDiff = 0;
    //最大差的下標
    int maxDiffIndex = 0;
    for (int i = 0; i<n-1; i++){
        double diff = rate[i] - rate[i+1];
        if (maxDiff < diff){
            maxDiff = diff;
            maxDiffIndex = i;
        }
    }

    //輸出繁殖率較大的那組細菌
    cout << maxDiffIndex +1 << endl;
    for (int i = maxDiffIndex; i>=0; i--){
        cout << id[i] << endl;
    }

    //輸出繁殖率較小的那組細菌
    cout << n - maxDiffIndex -1 << endl;
    for (int i = n-1; i >= maxDiffIndex+1; i--) {
        cout << id[i] << endl;
    }

    return 0;

}
