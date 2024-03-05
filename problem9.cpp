
/******** Swaping the Number *********/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;

//     cout<<"enter a:";
//     cin >> a;

//      cout<<"enter b:";
//     cin >> b; cout<<"enter a:";
    


//     c=a;
//     a=b;
//     b=c;

//     cout<<a<<endl;
//     cout<<b<<endl;
    

//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"enter a:";
    cin >> a;

     cout<<"enter b:";
    cin >> b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<a<<endl;
    cout<<b<<endl;
    

    return 0;
}