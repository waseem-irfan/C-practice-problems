//Write a C++ Program to check largest number out of five numbers using nested if

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;

    cout << "enter 1st value:";
    cin >> a;

    cout << "enter 2nd value:";
    cin >> b;

    cout << "enter 3rd value:";
    cin >> c;

    cout << "enter 4th value:";
    cin >> d;

    cout << "enter 5th value:";
    cin >> e;

    if (a > b)
    {
        if (a > c && a > d && a > e)
            cout << a << "is largest no";
    }

    if (b > a)
    {
        if (b > c && b > d && b > e)
            cout << b << "is largest no";
    }

    if (c > a)
    {
        if (c > b && c > d && c > e)
            cout << c << "is largest no";
    }

    if (d > a)
    {
        if (d > c && d > b && d > e)
            cout << d << "is largest no";
    }

    if (e > a)
    {
        if (e > b && e > d && e > c)
            cout << e << "is largest no";
    }

    return 0;
}