#include <iostream>
#include <string>
using namespace std;
struct Book {
string title;
string author;
string subject;
int book_id;
} Books[2];
int main() {
// book 1 specification
Books[0].title = "C++ How to Program";
Books[0].author = "Deital and Deital";
Books[0].subject = "C++ Programming";
Books[0].book_id = 64954;
// book 2 specification
Books[1].title="Programming Principles and Practice Using C++";
Books[1].author = "Stroustrup";
Books[1].subject = "C++ Programming";
Books[1].book_id = 61230;
// Print Book1 info
cout << "Book 1 title : " << Books[0].title <<endl;
cout << "Book 1 author : " << Books[0].author <<endl;
cout << "Book 1 subject : " << Books[0].subject <<endl;
cout << "Book 1 id : " << Books[0].book_id <<endl;
// Print Book2 info
cout << "Book 2 title : " << Books[1].title <<endl;
cout << "Book 2 author : " << Books[1].author <<endl;
cout << "Book 2 subject : " << Books[1].subject <<endl;
cout << "Book 2 id : " << Books[1].book_id <<endl;
return 0;
}