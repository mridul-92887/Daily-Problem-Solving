#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int id;

private:
    string gmail;
    string password;

public:
    // Function to set private data safely
    void setGmailPassword(string g, string p) {
        gmail = g;
        password = p;
    }

    // Function to show private data safely
    void showPrivateData() {
        cout << "Gmail: " << gmail << ", Password: " << password << endl;
    }

    // Function to show public data
    void showPublicData() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Student s1;

    // Public members assign করা যায় direct
    s1.name = "Mridul";  // Updated name
    s1.id = 365;

     // Private data assign via setter
    s1.setGmailPassword("mridul@gmail.com", "12345");

    // Show data
    s1.showPublicData();
    s1.showPrivateData();

    return 0;
}
