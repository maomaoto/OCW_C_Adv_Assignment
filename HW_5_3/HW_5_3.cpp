/*
    Homework 5-3 �\����ж�
    ������
        �ɂ����� a �� b �\����õ��Y�� c����ʾ�� a ? b = c������ ? �����Ǽӷ� +���p�� -���˷� *��
        ���� /���� ȡ�� %��
        Ո����ݔ��� a, b, c ��ֵ���_���\�����
        ���ĳ�N�\��������tݔ���������\���������κ��\�㶼���������tݔ�� error��
    ݔ�룺
        a,b,c��ֵ��һ�Ѓ�ݔ�룬�Զ�̖�g��
    ݔ����
        �傀�\���֮һ�� error

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int a = 0, b = 0, c = 0;
    char temp; // for ','
    cin >> a;
    cin >> temp;
    cin >> b;
    cin >> temp;
    cin >> c;

    if ( a + b == c) cout << '+' << endl;
    else if ( a - b == c) cout << '-' << endl;
    else if ( a * b == c) cout << '*' << endl;
    else if ( a % b == c) cout << '%' << endl;
    else if ( a % b == 0 && a / b == c) cout << '/' << endl;
    else cout << "error" << endl;

    return 0;
}
