#include<iostream>
using namespace std;
int main(){
    int p, q;
    cout<<"Enter p:";
    cin>>p;
    cout<<endl;
    cout<<"Enter q:";
    cin>>q;
    cout<<endl;
    int result = p%q;

    if(result){
        cout<<p<<" is not equal to "<<q;
    }
    else{
        
        cout<<p<<" is equal to "<<q;
    }

    return 0;
}