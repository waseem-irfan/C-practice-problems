// Array passing to a Function
#include<iostream>
// #include<string>
using namespace std;

int sum(int arr[]){
    int sum = 0;
    for(int i=0;i<3;i++){
        sum = sum+arr[i];
    }
        return sum;
}
int main()
{
    int arr[3] = {1,2,3};
    cout<<sum(arr);
    return 0;
}