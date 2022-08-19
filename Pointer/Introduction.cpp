#include <iostream>
using namespace std;

int main()
{    

    //Pointer Introduction
    int i = 34;
    cout << &i << endl;

    int *p = &i;
    cout << p << endl;

    cout << i << endl;
    cout << *p << endl;
    (*p)++;

    cout << i << endl;
    cout << *p << endl;

    int *ptr = 0;
    cout << *ptr << endl;


    //Pointer  Arithmetic
    int b = 7;
    int *c = &b;
    c = c + 3;
    cout << *c << endl;

    double a = 105.54;
    double *d = &a;
    d = d + 1;
    cout << d << endl;
}
