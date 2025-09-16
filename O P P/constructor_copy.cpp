#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double cgpa;
    
    // Constructor with parameters
    Student(string name, double cgpa) {
        this->name = name;
        this->cgpa = cgpa;
    }
    
    // Copy constructor
    Student(Student &obj) {
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }
    
    // Member function to display student information
    void getInfo() {
        cout << "name : " << name << endl;
        cout << "cgpa : " << cgpa << endl;
    }
};

int main() {
    // Example usage
    Student student1("John Doe", 3.8);
    Student student2 = student1; // Using copy constructor
    
    cout << "Student 1:" << endl;
    student1.getInfo();
    
    cout << "\nStudent 2 (copy):" << endl;
    student2.getInfo();
    
    return 0;
}