#include <iostream>
using namespace std;

class Book {
public:
    string title;
    int pages;

    // Constructor → Automatic call হবে object create হওয়ার সময়
    Book() {
        title = "Default Book";
        pages = 100;
        cout << "Constructor called!" << endl;
    }

    void showInfo() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b1;  // Constructor automatically call হবে
    b1.showInfo();

    return 0;
}
