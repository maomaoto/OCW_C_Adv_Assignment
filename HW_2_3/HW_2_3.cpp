/*
    Homework 2-3 ����[��
    ������
        ���׃��@�У��ώ�����С������һ����꠵��[��
        �����ώ����ĵİє�Ŀ��ͬ��С�к���СŮ��������һ������У�ÿ��С������������е�λ�ðl�oһ����̖
        (��̖��0�_ʼ)��Ȼ���ώ����VС���т���վ��ǰ߅��С�к����Ժ�����߅������СŮ���������x�_��У�
        ʣ�N��С��������վ�n���ٰ�ǰ��������С�к�СŮ���������x�_����[��������}��
        ��춽̎����ĵİ��ţ�ǡ�ÿ��Ա��Cÿ�ɂ�С���Ѷ����������x�_��У��K�������x�_�ăɂ�С�����Ǿ�̖��С��
        �;�̖���ăɂ�С���ѡ�
        (ע��ֻ��С�к���ǰ��СŮ�����ᣬ�������ɂ�֮�g�]������С���ѣ����������������x�_��С�)
        Ո�����ώ�����ꠣ���СŮ����̖��С�������򣬽o�������������x�_��е�С�к���СŮ���ľ�̖����
    ݔ�룺
        ��һ���ַ�����С������С��ַ�����ֻ�����F�ɂ��ַ�(����ݔ���e�õ�����̖�������H�����t��һ��)��
        �քe����С�к���СŮ�������ȳ��F���ַ�����С�к�����һ���ַ�����СŮ����
        С�����������^100��
    ݔ����
        ��СŮ����̖������ݔ���������x�_��е�С�к���СŮ���ľ�̖����ÿ��һ����̖��
        ��̖֮�g��һ���ո�ָ���

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
