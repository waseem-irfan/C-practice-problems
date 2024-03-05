#include <iostream>
using namespace std;
int main(){
    int waseem[10];
    waseem[0] = 333;
    waseem[1] = 234;
    waseem[2] =123;
    waseem[3] = 77;
    waseem[4] = 566;
    waseem[5] = 111;
    waseem[6] = 213;
    waseem[7] = 9;
    waseem[8] = 90;
    waseem[9] = -73;
    for(int i = 0; i < 10; i++){
        cout << waseem[i]<<endl;
    }

    for(int i = 0; i < 10; i++){
        cout << "Enter the Value of Waseem: ";
        cin>>waseem[i];
        cout<<endl;


    }
    
    for(int i = 0; i < 10; i++){
        cout << waseem[i]<<endl;
    }
    return 0;
}