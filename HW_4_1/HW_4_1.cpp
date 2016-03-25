/*
    Homework 4-1 ���䲡��
    ������
        Ҫ���OӋһ�����򣬽o���˰��źò����������ć��س�����0��10���ʾ��0��ʾСë����10��ʾ�ǳ����ء�
    ݔ�룺
        ��һ��ݔ�벡�˵Ă��� m (m < 50)���Լ�����ס����֢��������͇���ֵ a��
        �o���� m �У�ÿ�б�ʾ���˾�̖(��λ������0�a�R)���伲���ć��س̶�(���c����1λС��)��
        ÿ�����˵ļ������س̶ȶ���һ�ӡ�
    ݔ����
        Ҫ���ղ��˵ć��س̶�ݔ��ס����֢�����e�Ĳ��˾�̖��
        ע�⣺�����ǰ���в��˵ć��س̶ȁK���M��ס����֢�����e���tݔ��"None"(��������̖)��

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int m = 0;
    double a = 0;
    int person[50] = {0};
    double level[50] = {0};
    int severe = 0; // store number of severe patients
    double max = 0;
    int maxPos = 0;

    // read data
    cin >> m >> a;
    for (int i = 0; i<m; i++){
        cin >> person[i] >> level[i];
        if (level[i] > a) severe++;
    }

    if (severe == 0) cout << "None." << endl; // if no severe patient
    else {
        for (int i = 0; i < severe; i++){
            // find most severe
            for (int j = 0; j < m; j++){
                if (level[j] > max){
                    max = level[j];
                    maxPos = j;
                }
            }
            cout << setfill('0') << setw(3) << person[maxPos] << ' ' << fixed << setprecision(1) << level[maxPos] << endl;
            person[maxPos] = 0;
            level[maxPos] = 0;
            max = 0;
            maxPos = 0;
        }
    }


    return 0;
}
