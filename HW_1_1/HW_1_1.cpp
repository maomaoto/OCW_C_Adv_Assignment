/*
    Homework 1-1 �M��U��
    �y�z�G
        �w���@�Ӿ�ƼƲ� x[]�A�䤤���������������ۦP�C
        ��X���w���Ʋդ��O�_���@�Ӥ������� x[i] = i �����Y�A�ƲդU�бq 0 �}�l�C
    ��J�G
        �Ĥ@��]�t�@�Ӿ�� n (0 < n < 100)�A��ܼƲդ��������ӼơC
        �ĤG��]�t n �Ӿ�ơA�̦���ܼƲդ��������C
    ��X�G
        ��X���@�Ӿ�ơA�Y���� x[i] = i �������C�Y���h�Ӥ��������A��X�Ĥ@�Ӻ����������C
        �Y�S�����������A�h��X 'N'�C
*/

#include <iostream>
#include <iomanip>
using namespace std;



int main(){

    int n = 0;
    int x[100] = {0};
    bool found = false;

    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x[i];
    }

    for (int i = 0; i < n; i++){
        if (x[i] == i) {
            cout << i << endl;
            found = true;
            break;
        }
    }

    if (!found) cout << 'N' << endl;

    return 0;
}
