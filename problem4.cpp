// Write a C++ Program to check whether an alphabet is Vowel or consonent if else statement
#include <iostream>
using namespace std;
int main() {
   char c;
   cout<<"Enter any Alphabet:";
   cin>>c ;
   cout<<endl;
   if (c == 'a' || c == 'e' || c == 'i' ||
   c == 'o' || c == 'u' || c == 'A' ||
   c == 'E' || c == 'I' || c == 'O' || c == 'U')
   cout <<c<< " is a Vowel" << endl;
   else
   cout <<c<< " is a Consonant" << endl;
   return 0;
}