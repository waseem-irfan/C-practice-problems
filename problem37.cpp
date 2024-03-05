// Code To Print Hollow diamond
#include<iostream>
using namespace std;
void hollow_diamond(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n);j++){
            if(i+j<=n-1) // Upper left Triangle
            cout<<"*";
            else 
            cout<<" ";

            if((i+n)<=j) // Upper right Triangle
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n);j++){
            if(i>=j) // Bottom left Triangle
            cout<<"*";
            else
            cout<<" ";

            if(i>=(2*n-1)-j) // Bottom right Triangle
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter the number of rows: "<<endl;
    cin>>a;
    hollow_diamond(a);
    return 0;

}