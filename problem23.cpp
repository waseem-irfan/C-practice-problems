//Write a program to print a pattern in C++
/*

*****
****
***
**
*

*/
# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<endl;

    for(int i = n;i>=1;i--){
        for(int j =i ;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}