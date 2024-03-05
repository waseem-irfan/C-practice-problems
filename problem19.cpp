//Find the largest Number using Array.
#include<iostream>
using namespace std;
int main(){
    int num, i;
    int arr[100];
    cout<<"Enter the total number of elements: ";
    cin>>num;
    cout << endl;
    for(i=0;i<num;i++){
        cin>>arr[i];
    }
    for(i=1;i<num;i++){
        if(arr[0]<arr[i])
        arr[0]=arr[i];
    }
    cout<<"Largest number is "<<arr[0];
    return 0;
}