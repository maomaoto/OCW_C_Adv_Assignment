/*
    Homework 3-3 �����Ű�
    ������
        �oһ��Ӣ�Ķ��ģ����~֮�g�Կո�ָ�(ÿ�����~������ǰ��o���Ę��c��̖)��
        Ո�����������Ű棬Ҫ�����£�
        ÿ�������^80���ַ���
        ÿ�����~���ͬһ���ϡ�
        ��ͬһ�еĆ��~�g��һ���ո�ָ���
        ���׺���β���]�пո�

    ݔ�룺
        ��һ���ǂ����� n����ʾӢ�Ķ����І��~�Ĕ�Ŀ�������� n ���Կո�ָ���Ӣ�Ć��~��
        (���~������ǰ��o���Ę��c��̖����ÿ�����~�L�ȶ���̫�40����ĸ��)
    ݔ����
        �Ű���Ķ����ı���ÿ���ı��ַ������80���ַ������~֮�g��һ���ո�ָ���
        ÿ���ı���β���]�пո�

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
