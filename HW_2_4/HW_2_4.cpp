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

// ������̖
int findRight(char *ptrIn, char *ptrMark, int pos ){
    for (int i = pos; ptrIn[i] != '\0'; i++){
        if (ptrIn[i] == '(' ){
            // ���߀���ҵ�����̖���ُ���һλ���_ʼ������̖
            int match = findRight(ptrIn, ptrMark, i+1);
            if (match != 0) ptrMark[i] = ' ';
            i= match;
        }
        if (ptrIn[i] == ')'){
            // ����ҵ�����̖����mark׃�ɿհף��K�һ؂�λ��
            ptrMark[i] = ' ';
            return i;
        }
    }
    // �ҵ��Yβ�]������̖���؂�0
    return 0;
}

// ������̖
void findLeft(char *ptrIn, char *ptrMark, int pos ){
    for (int i = pos; ptrIn[i] != '\0'; i++){
        if (ptrIn[i] == '(' ){
            // ����ҵ�����̖������һλ���_ʼ������̖
            int match = findRight(ptrIn, ptrMark, i+1);
            // �ҵ�����̖�ˣ������ҵ�λ���Ƶ�����̖����һ��λ��
            if (match != 0) {
                ptrMark[i] = ' ';
                i = match;
            }
        }
    }
}




int main(){

    char input[102] = {'\0'};
    char mark[102] = {'\0'};
    char *ptrIn = input;
    char *ptrMark = mark;
    cin.getline(input, 101);
    // add all marks
    for (int i = 0; input[i] != '\0'; i++){
        if (input[i] == '(') mark[i] = '$';
        else if (input[i] == ')') mark[i] = '?';
        else mark[i] = ' ';
    }


    findLeft(ptrIn, ptrMark, 0);
    // ��ӡ�Y��
    cout << input << endl;
    cout << mark << endl;




    return 0;
}
