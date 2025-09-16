#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;

    void showInfo() {  // void return type
        cout << "Book: " << title << ", Author: " << author << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b1;   // Object
    b1.title = "C++ Basics";
    b1.author = "Bjarne";
    b1.pages = 400;

    b1.showInfo();  // Member function call

    return 0;
}
