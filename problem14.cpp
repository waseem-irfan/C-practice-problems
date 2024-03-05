// Take inputs from the user and store it in an array.
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter 5 Numbers: ";
    cout<<endl;
    for(int i = 0; i<5;i++){
        cin>>arr[i];
    }
    cout<<"The Numbers are:"<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}