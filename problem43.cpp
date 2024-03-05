// Write a program to input three angles of a triangle and check whether a triangle is valid or not.
#include<iostream>
using namespace std;

int main(){
    int a , b, c;
    cout<<"Enter first angle: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter second angle: ";
    cin>>b;
    cout<<endl;
    cout<<"Enter third angle: ";
    cin>>c;
    cout<<endl;

    
    if(a==0 || b==0 || c==0){
        cout<<"This is not a Triangle.";

    }
    else if((a+b+c)==180){
        cout<<a<<" "<<b<<" and "<<c<<" are the Angles of a Triangle.";
    }
    else{
        cout<<a<<" "<<b<<" and "<<c<<" are not the Angles of a Triangle.";
    }


    return 0;
}