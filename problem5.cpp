// Write a C++ Program to check whether an alphabet is vowel or consonent using switch case.
#include <iostream>
 
using namespace std;
 
int main(){
 
     char ch;
 
    //Taking an alphabet from user
    cout<<"Enter any alphabet: ";
    cin>>ch;
    cout<<endl;
 
    // checking vowel and consonant
 
     switch(ch)
    {
        case 'a':
            cout<<ch<<" is vowel";
        break;
        case 'e':
            cout<<ch<<" is vowel";
        break;
        case 'i':
            cout<<ch<<" is vowel";
        break;
        case 'o':
            cout<<ch<<" is vowel";
        break;
        case 'u':
            cout<<ch<<" is vowel";
        break;
        case 'A':
            cout<<ch<<" is vowel";
            break;
        case 'E':
            cout<<ch<<" is vowel";
        break;
        case 'I':
            cout<<ch<<" is vowel";
        break;
        case 'O':
            cout<<ch<<" is vowel";
        break;
        case 'U':
            cout<<ch<<" is vowel";
        break;
        default:
            cout<<ch<<" is consonant";
    }
 
    return 0;
 
 
}