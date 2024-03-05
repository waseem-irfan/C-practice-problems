// Write a Program to print fibonacci series.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;
    int term_1,term_2;
    cout<<"0"<<" "<<"1"<<" ";
    term_1 = 0;
    term_2 =1;
    for(int i=0;i<n-2;i++){
    int next_term = term_1 + term_2;

    term_1 = term_2;
    term_2 = next_term;
    cout<<next_term<<" ";
    }
}