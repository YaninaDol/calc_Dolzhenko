// calc_Dolzhenko.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "calc_Dolzhenko.h"
using namespace std;



calc_Dolzhenko::calc_Dolzhenko()
{
    
        a = 0;
        b = 0;
    
}

calc_Dolzhenko::calc_Dolzhenko(int new_a, int new_b)
{
    a = new_a;
    b = new_b;
}

int calc_Dolzhenko::getA()
{
    return a;
}

int calc_Dolzhenko::getB()
{
    return b;
}
int calc_Dolzhenko::my_plus()
{
    int sum = this->a + this->b;
    return sum;
}
int calc_Dolzhenko::minus(int a, int b)
{
    int minus = a - b;
    return minus;
}
int calc_Dolzhenko::mnog(int a, int b)
{
    int mnog = a * b;
    return mnog;
}
int calc_Dolzhenko::dev(int a, int b)
{
    int dev = a / b;
    return dev;
}
int calc_Dolzhenko::less(int a, int b)
{
    if (a < b)return a;
    else return b;
}
int calc_Dolzhenko::more(int a, int b)
{
    if (a > b)return a;
    else return b;
}
void calc_Dolzhenko::div_zero(int a, int b)
{
    if (a != 0 && b != 0)
    {
        int dev = a / b;
        cout << dev;
    }
    else
    {
        cout << " Error!";
    }
}

