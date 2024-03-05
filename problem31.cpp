// Write a Program to print the given pattern
/*
a
bb
ccc
dddd
eeeee
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    char alphabet = 'a';
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<alphabet;
        }
        alphabet++;
        cout<<endl;
    }
    return 0;
}