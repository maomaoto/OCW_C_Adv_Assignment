/*
    Homework 5-2 �ַ����дΔ���2�����ĸ
    ������
        ݔ��һ���L�Ȳ����^500����̖���ַ�����ݔ���ڴ��е�2���Ӣ�Z��ĸ(��С����ĸ�J����ͬ)�ʹΔ���
        (���������������̖���t���Բ����])������ж�����ĸ�ĴΔ����ǵ�2�࣬�t��������ĸ���F�����ݔ����1����
    ݔ�룺
        һ���ַ���
    ݔ����
        ����ĸ+С����ĸ:����

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
