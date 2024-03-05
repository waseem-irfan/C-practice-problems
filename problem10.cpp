//Write a C++ Program to take 3 digit number from the user , and then separate its digits.
#include<iostream>
using namespace std;
int main(){

    int num;
    cout <<"Enter a three digit Number:";
    cin>>num;
    cout<<endl;
    int u = num%10;
    int t = (num/10)%10;
    int h = (num/100)%10;
    int th = (num/1000);
    cout<<th<<endl;
    cout<<h<<endl;
    cout<<t<<endl;
    cout<<u<<endl;
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout<<"enter the three digit number;"<<endl;
//     cin>>number;
//     int unit = number%10;
//     int tens =  (number%100)/10;
//     int hundred=  (number/100);
//     cout<<"unit:"<<unit<<endl;
//     cout<<"tens:"<<tens<<endl;
//     cout<<"hundred:"<<hundred<<endl;
//     return 0;

// }