// Write a C++ Program to check the largest number( Out of Three Numbers) Using Nested if else statement.
#include<iostream>
using namespace std;
int main(){

    int num1,num2,num3;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<endl;
    cout<<"Enter the first number:";
    cin>>num2;
    cout<<endl;
    cout<<"Enter the first number:";
    cin>>num3;
    cout<<endl;

    if(num1>=num2){
        if(num1>=num3){
            cout<<num1<<" is the largest Number.";
        }
        else{
            cout<<num3<<" is the largest Number.";
        }
    }
    else{
        if(num2>=num3){
            cout<<num2<<" is the largest number.";
        }
        else{
            cout<<num3 << " is the largest number.";
        }
    }
    return 0;
}