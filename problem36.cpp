// COde to print the diamond.

#include<iostream>
using namespace std;
int main(){
    //Upper Part of diamond.
   for(int i = 1; i<=6;i++){
        for(int k = 6-i; k>0;k--){
            cout<<" ";
        }
            for(int j = 1; j<=i ; j++){
                cout<<"* ";
            }
            cout<<endl;
    }
    //Lower Part of diamond.
    for(int i=5;i>=1;i--){
        for(int k=5-i;k>0;k--){
            cout<<" ";
            }
            for(int j=i;j>0;j--){
                cout<<" *";
        }
            cout<<endl;
    }
    return 0;
}