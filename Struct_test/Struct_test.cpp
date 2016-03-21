/*
    Struct test
*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;

struct student{
    int id_num;
    char name[10];
};

void renew(student *one){
    one->id_num = 20130000 + one->id_num;
    for (int i = 0; one->name[i] != '\0'; i++){
        one->name[i] = toupper(one->name[i]);
    }
}

int main(){

    student mike1 = {123, { 'm', 'i', 'k', 'e', '\0' } };
    student mike2;

    mike2 = mike1;
    mike2.id_num = 20130000 + mike2.id_num;
    for (int i = 0; mike2.name[i] != '\0'; i++){
        mike2.name[i] = toupper(mike2.name[i]);
    }

    cout << mike1.id_num << ' ' << mike1.name << endl;
    cout << mike2.id_num << ' ' << mike2.name << endl;


    student *one = &mike1;
    cout << (*one).id_num << ' ' << (*one).name << endl;
    cout << one->id_num << ' ' << one->name << endl;

    renew(&mike1);
    cout << mike1.id_num << ' ' << mike1.name << endl;
    return 0;
}
