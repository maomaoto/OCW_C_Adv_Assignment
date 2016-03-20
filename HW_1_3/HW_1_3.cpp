/*
    Homework 1-3 祇布参璸
    磞瓃
        Τ厨眀╰参ウΤ
        (1) 参璸–┮厨祇布羆窥计
        (2) 参璸–摸祇布羆窥计
        盢╰参虏て安砞祇布摸Τ A, B, C 贺; Τ 3 ID だ 1, 2, 3
    块
        ╰参块︽–︽材ID(俱1┪2┪3)材计祇布羆眎计(眎计ぃ禬筁100)
        ぇ琌祇布摸(才A┪B┪C)㎝莱祇布肂(虫弘疊翴ぃ禬筁1000.0)
    块
        块せ︽玡︽–(IDパ块)┮厨祇布羆窥计(玂痙ㄢ计)
        ︽–摸祇布羆窥计(玂痙ㄢ计)
*/

#include <iostream>
#include <iomanip>
using namespace std;



int main(){

    double id[3] = {0}; // 3ノぶ窥
    double type[3] = {0};   // 3摸祇布ぶ窥
    int tempCount = 0;  // Τ碭眎祇布
    int tempID = 0; // ヘ玡琌弄祇布
    char tempType = '\0';   // ヘ玡琌弄贺摸祇布
    double tempMoney = 0;   // ヘ玡弄祇布肂

    // Τ︽
    for (int i = 0; i<3; i++){
        cin >> tempID >> tempCount;
        for (int j = 0; j<tempCount; j++){
            cin >> tempType >> tempMoney;
            id[tempID-1] += tempMoney;  //ê肂
            switch (tempType){
                case 'A':   //  A 摸祇布肂
                    type[0] += tempMoney;
                    break;
                case 'B':   //  B 摸祇布肂
                    type[1] += tempMoney;
                    break;
                case 'C':   //  C 摸祇布肂
                    type[2] += tempMoney;
                    break;
            }
        }
    }


    cout << fixed << setprecision(2) << "1 " << id[0] << endl;
    cout << fixed << setprecision(2) << "2 " << id[1] << endl;
    cout << fixed << setprecision(2) << "3 " << id[2] << endl;
    cout << fixed << setprecision(2) << "A " << type[0] << endl;
    cout << fixed << setprecision(2) << "B " << type[1] << endl;
    cout << fixed << setprecision(2) << "C " << type[2] << endl;

    return 0;
}
