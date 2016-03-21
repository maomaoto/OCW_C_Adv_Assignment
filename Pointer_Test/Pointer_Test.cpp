/*
    Pointer test
*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;



int main(){
    int a = 70;
    cout << "&a: " << &a << endl;
    cout << "sizeof(&a): " << sizeof(&a) << endl; // 4 in Code::Blocks
    cout << "*&a: " << *&a << endl; // 70
    cout << "a: " << a << endl; // 70

    int *pointer;
    pointer = &a;
    cout << "pointer = &a;" << endl;
    cout << "pointer: " << pointer << endl;
    cout << "*pointer: " << *pointer << endl;
    cout << "&pointer: " << &pointer << endl;
    pointer++;
    cout << "poinrer++: " << pointer << endl;
    return 0;
}
