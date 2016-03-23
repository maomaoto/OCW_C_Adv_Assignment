/*
    Homework 2-4 ��̖ƥ�䆖�}
    ������
        ��ĳ���ַ���(�L�Ȳ����^100)��������̖������̖�ʹ�С����ĸ��Ҏ��(�c��Ҋ���㔵ʽ��һ��)
        �κ�һ������̖���ăȵ����c��߅�Ҿ��x���������̖ƥ�䡣
        ��һ�������ҵ��o��ƥ�������̖������̖��ݔ��ԭ���ִ����K������һ�И�ʾ������ƥ�����̖��
        ����ƥ�������̖��'$'��ע������ƥ�������̖��'?'��ע��
    ݔ�룺
        ݔ�������M������ÿ�M����һ�У�����һ���ַ�����ֻ����������̖�ʹ�С����ĸ���ַ����L�Ȳ����^100
        ע�⣺cin.getline(str, 100)���ֻ��ݔ��99���ַ���
    ݔ����
        ��ÿ�Mݔ�딵����ݔ�����У���һ�а���ԭʼݔ���ַ����ڶ�����'$', '?'�Ϳո�M�ɣ�
        '$'��'?'��ʾ�c֮����������̖������̖��ƥ�䡣

*/

#include <iostream>
//#include <iomanip>
//#include <cstdio>   // for getchar()
using namespace std;

int main(){

    char input[102] = {'\0'};
    char mark[102] = {'\0'};



    char *ptrIn = input;
    char *ptrMark = mark;

    while(cin.getline(input, 101)){
        int leftPos[102] = {0};
        int rightPos[102] = {0};

        int leftCount = 0;
        int rightCount = 0;

        // init mark
        for (int i = 0; input[i] != '\0'; i++){
            mark[i] = ' ';
        }

        for (int i = 0; input[i] != '\0'; i++){
            if (input[i] == '('){
                leftPos[leftCount] = i;
                leftCount += 1;
            } else if (input[i] == ')'){
                if (leftCount > 0){
                    leftPos[leftCount] = 0;
                    leftCount -= 1;
                } else {
                    mark[i] = '?';
                }
            }
        }

        for (int i = 0; i <= leftCount -1; i++){
            mark[leftPos[i]] = '$';
        }


        // ��ӡ�Y��
        cout << input << endl;
        cout << mark << endl;
    }



    return 0;
}
