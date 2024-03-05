// Write a Program to Print the pattern
/*
a
bc
def
ghij
klmno
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;
    char alphabet = 'a';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<alphabet++;
        }
        cout<<endl;
    }
    return 0;
}