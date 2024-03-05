// Write a C++ Program which displays hours and minutes from 01:00 to 2:59. You can display the time using a delay of one minute. Use nested for loops to perform this task.
#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i<3; i++){
        for(int j = 0 ; j<=9; j++){
            cout<<"0"<<i<<":"<<"0"<<j<<endl;
        }
       
        for(int j = 10 ; j<=59; j++){
            cout<<"0"<<i<<":"<<j<<endl;
        }
       
    }
    return 0;
}