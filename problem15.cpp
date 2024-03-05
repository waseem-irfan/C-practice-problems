// Sum and Average of all the elements in an Array.
#include<iostream>
using namespace std;
int main(){
    double arr[10];
    double sum = 0;
    double count = 0;
    double average;
    cout<<"Enter 10 Numbers:";
    cout<<endl;

    for (int i =0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"The array is ";
    for(int j = 0; j <10;j++){
        cout<<arr[j]<<" ";
        sum = sum + arr[j];
        count++;
        
    }
    cout<<endl;
    cout <<"Sum of the number of array is "<< sum<<endl;
    average = sum/count;
    cout<<"Average of the number of elements of array is "<<average<<endl;
    return 0;
}