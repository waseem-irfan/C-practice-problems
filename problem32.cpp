// Write a Program to print the given pattern
/*
a
ab
abc
abcd
abcde
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        char alphabet = 'a';
        for(int j =1;j<=i;j++){
            cout<<alphabet++;
        }
        cout<<endl;
    }
    return 0;
}