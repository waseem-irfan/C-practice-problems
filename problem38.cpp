// Take three integers from the user and print them in ascending and decending order.
#include <iostream>
using namespace std;

int main ()
{
    int a,b,c;

    cout<<"Enter three integers :";
    cin>>a>>b>>c;


cout<<endl;
cout<<"***** Ascending Order ****** ";
cout<<endl;
    if (a>b && b>c) {
    cout<<c<<" "<<b<<" "<<a;
    }

    else if (a>c && c>b)
    cout<<b<<" "<<c<<" "<<a;

    else if (b>a && a>c)
    cout<<c<<" "<<a<<" "<<b;

    else if (b>c && c>a)
    cout<<a<<" "<<c<<" "<<b;

    else if (c>a && a>b)
    cout<<b<<" "<<a<<" "<<c;

    else cout<<a<<" "<<b<<" "<<c;

cout<<endl;
cout<<"***** Decending Order ****** ";
cout<<endl;
    if (a>b && b>c) {
    cout<<a<<" "<<b<<" "<<c;
    }

    else if (a>c && c>b)
    cout<<a<<" "<<c<<" "<<b;

    else if (b>a && a>c)
    cout<<b<<" "<<a<<" "<<c;

    else if (b>c && c>a)
    cout<<b<<" "<<c<<" "<<a;

    else if (c>a && a>b)
    cout<<c<<" "<<a<<" "<<b;

    else cout<<c<<" "<<b<<" "<<a;
    return 0;
}
