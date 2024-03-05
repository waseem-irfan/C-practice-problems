// Write a Program to print the pattern
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
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;
    for(int i=n;i>=1;i--){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<(n-i+1);
        }
        cout<<endl;
    }
}