/*
    Homework 4-2 �䌦����
    ������
        Ó����������(DNA)�Ƀɗl���a�ļ������p�����ķ�ʽ�Y�϶��ɡ�������DNA�ļ�������ķN��
        �քe��������(A)���B����(G)���������(T)�Ͱ����(C)���҂�֪�����ڃɗl���a���朵Č���λ���ϣ�
        �����ʿ��Ǻ���������䌦���B���ʿ��ǺͰ�����䌦��
        ����΄վ��Ǹ���һ�l����ϵļ�����У��o�������Ļ��a��ϵļ�����С�
    ݔ�룺
        ��һ����һ�������� n���������� n �lҪ���ļ��朡�
        ���¹��� n �У�ÿ����һ���ַ�����ʾһ�l���朡��@���ַ���ֻ���д���ĸA��T��G��C��
        �քe��ʾ�����ʡ�������ड��B���ʺͰ���ड�ÿ�l���朵��L�ȶ������^255��
    ݔ����
        ���� n �С�
        ÿ�О�һ��ֻ���д���ĸA, T, G, C ���ַ������քe���cݔ��ĸ����朻��a�ļ��朡�

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int n = 0;
    char seq[256] = {'\0'};

    cin >> n;
    getchar();

    for (int i = 0; i < n; i++){
        cin.getline(seq, 256);
        for (int j = 0; seq[j] != '\0'; j++){
            switch(seq[j]){
                case 'A':
                    cout << 'T';
                    break;
                case 'T':
                    cout << 'A';
                    break;
                case 'C':
                    cout << 'G';
                    break;
                case 'G':
                    cout << 'C';
                    break;
            }
        }
        cout << endl;
    }

    return 0;
}
