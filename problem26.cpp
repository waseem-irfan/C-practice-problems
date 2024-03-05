// Write a Program to print a pattern 
/*
11111
2222
333
44
5
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;
    for(int i=n;i>=1;i--){
        for(int j = 1;j<=i;j++){
            cout<<(n-i+1);
        }
        cout<<endl;
    }
    return 0;
}