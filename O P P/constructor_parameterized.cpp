#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int id;

    // Parameterized constructor
    Student(string n, int i) {
        name = n;
        id = i;
    }

    void showInfo() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Student s1("Mridul", 365);
    Student s2("Atik", 101);

    s1.showInfo();
    s2.showInfo();

    return 0;
}
