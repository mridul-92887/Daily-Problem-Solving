#include <iostream>
using namespace std;

class Book {
public:
    string title;
    int pages;

    void showTitle() { 
        cout << "Book Title: " << title << endl;
    }

    int pagesPlus100() {
        return pages + 100;
    }
};

int main() {
    Book b1;
    b1.title = "Advanced C++";
    b1.pages = 450;

    b1.showTitle();  // void function
    cout << "Pages + 100 = " << b1.pagesPlus100() << endl; // int function

    return 0;
}
