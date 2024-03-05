// Pascal Triangle Using nested for loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n(number of rows): ";
    cin>>n;
    cout<<endl;

    for(int i=0;i<=n;i++){
        int coef = 1;
        for(int k = n-i;k>0;k--){
            cout<<" ";
        }
            for(int j=1;j<=i;j++){
                cout<<coef<<" ";
                coef = coef * (i-j)/j;
            }
            cout<<endl;
    }
    return 0;
}