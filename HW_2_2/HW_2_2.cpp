/*
    Homework 2-2 �ǹȲ���(����Collatz conjecture)
    ������
        ���^�ǹȲ��룬��ָ������һ����������������攵���t��3��1�������ż�����t����2��
        �õ��ĽY���ٰ�������Ҏ�t���}̎����K���܉�õ�1��
        ����Ҫ��ݔ��һ�������������^̎��õ�1���^��ݔ����
    ݔ�룺
        һ��������
    ݔ����
        ��ݔ��������1���^�̣�ÿһ����һ�У�ÿһ��������Ӌ���^�̡�
        ����һ��ݔ��"End"�����ݔ���1��ֱ��ݔ��"End"��

*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;

void Collatz(int n){
    if (n == 1) cout << "End" << endl;
    else if (n % 2 == 1){
        cout << n << "*3+1=" << n*3+1 << endl;
        Collatz(n*3+1);
    } else {
        cout << n << "/2=" << n/2 << endl;
        Collatz(n/2);
    }

}


int main(){

    int n = 0;
    cin >> n;
    Collatz(n);
    return 0;
}
