/*
    Homework 2-1 ���~���D
    ������
        ݔ��һ������(һ��)���������е�ÿһ�����~���D��ݔ����
    ݔ�룺
        ֻ��һ�У���һ���ַ����������^500���ַ������~֮�g�Կո���_��
        ���^���~ָ�������в������ո���B�m���ַ���
        �@���}Ո��cin.getline()ݔ��һ�������������~�f�w̎��
    ݔ����
        ���Dÿһ�����~����ַ��������~֮�g�Ŀո����cԭ��һ�¡�

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;

void reverse(char in[], int pos){
    if (in[pos] == ' '){
        // ����ǿո�ֱ��ݔ�����K��λ��������һ��
        cout << in[pos];
        reverse(in, pos+1);
    } else if (in[pos] != '\0') {
        // ������ǿո�Ҳ���ǽYβ��̖�����҆��~�K�����ӡ
        // ��λ���Ƶ����~β�˵���һ���ַ�
        int nextPos = pos;
        for (int i = pos; in[i] != '\0'; i++){
            if (in[i] == ' ') break;
            nextPos = i;
        }
        for (int i = nextPos; i >= pos; i--) cout << in[i];
        reverse(in, nextPos+1);
    }

}


int main(){

    char input[501] = {'\0'};
    cin.getline(input, 500);
    reverse(input, 0);
    return 0;
}
