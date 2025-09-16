#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;
    float price;

    // void member function → Book info দেখাবে
    void showInfo() {
        cout << "Title: " << title << ", Author: " << author
             << ", Pages: " << pages << ", Price: $" << price << endl;
    }

    // int member function → pages + 50 return করবে
    int pagesPlus50() {
        return pages + 50;
    }

    // float member function → price after discount return করবে
    float discountedPrice(float discount) {
        return price - discount;
    }
};

int main() {
    // Multiple Objects তৈরি করা হলো
    Book b1, b2, b3;

    // Object 1 Data
    b1.title = "C++ Basics";
    b1.author = "Bjarne Stroustrup";
    b1.pages = 400;
    b1.price = 20.5;

    // Object 2 Data
    b2.title = "OOP Guide";
    b2.author = "Mr. X";
    b2.pages = 250;
    b2.price = 15.0;

    // Object 3 Data
    b3.title = "Data Structures";
    b3.author = "Mridul";
    b3.pages = 300;
    b3.price = 18.0;

    // Object 1 Call
    b1.showInfo();
    cout << "Pages + 50 = " << b1.pagesPlus50() << endl;
    cout << "Price after $5 discount = $" << b1.discountedPrice(5) << endl << endl;

    // Object 2 Call
    b2.showInfo();
    cout << "Pages + 50 = " << b2.pagesPlus50() << endl;
    cout << "Price after $3 discount = $" << b2.discountedPrice(3) << endl << endl;

    // Object 3 Call
    b3.showInfo();
    cout << "Pages + 50 = " << b3.pagesPlus50() << endl;
    cout << "Price after $2 discount = $" << b3.discountedPrice(2) << endl << endl;

    return 0;
}
