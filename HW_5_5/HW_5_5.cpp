/*
    Homework 5-5 ��·�Ԍm
    ������
        ����վ��һ���Ԍm�e�ĕr�����������e�C�}�s�ĵ�·Ū��ʧȥ����У�������ܵõ��Ԍm�؈D������͕�׃�÷ǳ����Ρ�
        ���O���ѽ��õ���һ�� n*m ���Ԍm�D����Ո���ҳ������c�����ڵ����·��
    ݔ�룺
        ��һ���ǃɂ����� n �� m ( 1 <= n,m <= 100)����ʾ�Ԍm���Д����Д���
        ���� n �У�ÿ��һ���L�� m ���ַ�������ʾ�����Ԍm�Ĳ��֡�
        �ַ�'.'��ʾ�յأ�'#'��ʾ����'S'��ʾ���c��'T'��ʾ���ڡ�
    ݔ����
        ݔ�������c������������Ҫ�ߵĲ�����(�㲻�ܳ����Ԍm��)

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){

    int num = 0;
    int point[100][2] = {{0}};

    int extPos[100] = {0};  // ӛ䛘O���c
    int extNum = 0; // �O���c�Ĕ�Ŀ

    int min = -1;
    int minPos = 0;

    bool flag = true;

    // read data
    cin >> num;
    for (int i =0; i<num; i++){
        cin >> point[i][0] >> point[i][1];
    }

    for (int i = 0; i<num; i++){
        // �� i ���c�����������c���^
        for (int j = 0; j<num; j++){
            if (i != j){
                //����� i ���c���κ�һ���c֧�䣬��flag�ĳ�false���K����
                if (point[i][0] <= point[j][0] && point[i][1] <= point[j][1]){
                    flag = false;
                    break;
                }
            }
        }
        // ���ȫ�����c�����^�^�ᣬflag߀��true����ʾ�� i ���c�]�б��κ��c֧�䣬�������ǘO���c
        if (flag == true){
            extPos[extNum] = i;
            extNum++;
        }
        // reset flag
        flag = true;
    }

    // x��С���󣬴�ӡ���O���c
    for (int j = 0; j < extNum; j++){
        // ����С��xֵ
        for (int i = 0; i < extNum; i++){
            if (extPos[i] >= 0){    // ��ʾ�@���c߀�]��ȡ��
                if (min < 0){   // ��һ��ֵ��ֱ��assign
                    min = point[extPos[i]][0];
                    minPos = i;
                } else {
                    if (point[extPos[i]][0] < min){
                        min = point[extPos[i]][0];
                        minPos = i;
                    }
                }
            }
        }
        cout << '(' << point[extPos[minPos]][0] << ',' << point[extPos[minPos]][1] << ')';
        if (j < extNum -1) cout << ',';
        else cout << endl;

        // reset data
        extPos[minPos] = -1;    // �ѽ���ӡ�^���c���-1
        min = -1;

    }


    return 0;
}
