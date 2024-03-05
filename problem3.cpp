// Program to find biggest of four numbers using nested-if
#include<iostream>
using namespace std;
int main(){
    int a, b , c, d;
    cout<<"Enter a:";
    cin>>a;
    cout<<endl;
    cout<<"Enter b:";
    cin>>b;
    cout<<endl;
    cout<<"Enter c:";
    cin>>c;
    cout<<endl;
    cout<<"Enter d:";
    cin>>d;
    cout<<endl;

    if(a>b){
        if(a>c){
            if(a>d){
                cout<<a<<" is the biggest number.";
            }
            else{
                cout<<d<<" is the biggest number.";
            }
        }
        else{
            if(c>d){
                cout<<c<<" is the largest number.";
            }
            else{
                cout<<d<<" is the largest number.";
            }
        }     
    
    }
    else{
        if(b>c){
            if(b>d){
                cout<<b<<" is the largest number.";
            }
            else{
                cout<<d<<" is the greatest number.";
            }
        }
        else{
            if(c>d){
                cout<<c<<" is the largest number.";
            }
            else{
                cout<<d<<" is the greatest number.";
                
            }
        }
    }
    


    return 0;
}