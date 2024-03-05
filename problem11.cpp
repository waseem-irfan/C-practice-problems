//Write a program to check the largest number out of five numbers using nested if else.
#include <iostream>

using namespace std;

int main()
{int a,b,c,d,e;
cout<<"Enter a: ";
cin>>a;
cout<<"Enter b: ";
cin>>b;
cout<<"Enter c: ";
cin>>c;
cout<<"Enter d: ";
cin>>d;
cout<<"Enter e: ";
cin>>e;

if (a>=b && a>=c && a>=d && a>=e)
    cout<<"A is largest and has value: "<<a<<endl;
else
    {if (b>=c && b>=d && b>=e)
        cout<<"B is largest and has value: "<<b<<endl;
    else
    {   if (c>=d && c>=e)
        cout<<"C is largest and has value: "<<c<<endl;
        else
        {   if (d>=e)
                cout<<"D is largest and has value: "<<d<<endl;
            else
                cout<<"E is largest and has value: "<<e<<endl;  
        }
    }
    }
}