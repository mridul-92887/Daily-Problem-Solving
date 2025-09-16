#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int id;
    float cgpa;

    void display() {
        cout << "Name: " << name << ", ID: " << id << ", CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s1, s2;

    s1.name = "Rahim";
    s1.id = 101;
    s1.cgpa = 3.85;

    s2.name = "Karim";
    s2.id = 102;
    s2.cgpa = 3.60;

    s1.display();
    s2.display();

    return 0;
}
