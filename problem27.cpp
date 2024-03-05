// Write a Program to print the pattern
/*
     1
    22
   333
  4444
 55555
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;

    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j =1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}