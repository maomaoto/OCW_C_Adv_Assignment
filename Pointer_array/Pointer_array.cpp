/*
    Pointer and array
*/

#include <iostream>
#include <iomanip>
#include <cstdio>   // for getchar()
using namespace std;



int main(){
    int a[5] = {1,2,3,4,5};
    int *p = &a[3];
    cout << *p << endl;
    *p = 100;
    cout << a[3] << endl;

    *p = NULL;
    cout << a << endl;
    p = a;
    cout << p << endl;

    cout << "a: " << a << endl;
    cout << "a+1: " << a+1 << endl;
    cout << "&a: " << &a << endl;
    cout << "&a +1: " << &a +1 << endl;
    cout << "*(&a): " << *(&a) << endl;
    cout << "*(&a) +1: " << *(&a) +1 << endl;
    cout << endl;

    int b[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    cout << "         b = " << b << endl;
    cout << "     &b[0] = " << &b[0] << endl << endl;
    cout << "       b+1 = " << b+1 << endl;
    cout << "   &b[0]+1 = " << &b[0]+1 << endl << endl;
    cout << "        *b = " << *b << endl;
    cout << "      b[0] = " << b[0] << endl;
    cout << "  &b[0][0] = " << &b[0][0] << endl << endl;
    cout << "      *b+1 = " << *b+1 << endl;
    cout << "    b[0]+1 = " << b[0]+1 << endl;
    cout << "&b[0][0]+1 = " << &b[0][0]+1 << endl << endl;


    return 0;
}
