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

    ������
        F(Xs, Ys) = min(��S�c���п��܄���, �����ߵ�Z (F(Xz, Yz)) )

        list triedPositions;
        History[100][100];
        int F(x, y) {
            if (History[x][y] != -1)
                return History[x][y];
            if (x,y = Xe, Ye)
                return 0;

            list = getLegalMoves(x, y);
            for each move in list{
                ������(move)
                Add move in triedPositions;
                R = 1 + min(F(move֮�������))
                ���N����(move)
                Remove move in triedPositions;
            }
            return R;
        }

*/

#include <iostream>
#include <iomanip>
//#include <cstdio>   // for getchar()
#include <cstring>
using namespace std;

int main(){



    return 0;
}
