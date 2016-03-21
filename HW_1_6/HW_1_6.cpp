/*
    Homework 1-6 ���Ђ�Ⱦ
    ������
        ��һ���׸���Ⱥס�ھW��������^�ȣ�����^�� n*n �ľ�ꇣ�ÿ�����c��һ�����g�����g�e����ס�ˣ�
        Ҳ���ܿ������ڵ�һ�죬��Щ���g�e���˵������У�����ÿ�죬�����е��˕�ʹ�����ӂ�Ⱦ�����У�
        (�ѽ��ò��Ĳ�׃)���շ��g������Ⱦ��Ոݔ��� m ������е��˔���
    ݔ�룺
        ��һ��һ������ n��n �����^100����ʾ�� n*n �����᷿�g��
        ����� n �У�ÿ�� n ���ַ��� '.'��ʾ��һ��ԓ���gס���������ˣ� '#'��ʾԓ���g������
        '@'��ʾ��һ��ԓ���gס�������е��ˡ�
        �����һ����һ������ m��m �����^100��
    ݔ����
        ݔ���� m �죬�����е��˔���

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
