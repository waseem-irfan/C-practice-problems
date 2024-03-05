// C++ Program to print palindrome numbers in a given range
#include<iostream>
using namespace std;
// A function to check if n is palindrome
int isPalindrome(int n){
    int rev = 0;
    for(int i=n;i>0; i/=10)
    rev = rev*10 + i%10;
// If n and rev are same, then n is palindrom
    return (n==rev);
}

// Print all palindrome between min and max
void countPal(int min, int max){
    for(int i=min;i<=max;i++)
        if(isPalindrome(i))
        cout<<i<<" ";
}

// Driver Program to test above function
int main(){
    cout<<"Palindrome Numbers: ";
    countPal(1,200);
    cout<<endl;
    return 0;
}