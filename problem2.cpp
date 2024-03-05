// Make a calculator which add,subtract,divide and multipy two numbers under switch statement
#include<iostream>

using namespace std;

int main(){
    char Oper;
    float num1 , num2;
    cout<<"Enter the operator( * , / , + , -): "<<endl;
    cin>> Oper;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;
    switch (Oper){
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;

        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;

        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;

        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;

        default:
        cout<<"Error!";
        break;

    }


    return 0;
}