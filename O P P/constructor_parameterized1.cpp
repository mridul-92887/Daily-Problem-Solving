#include <iostream>
using namespace std;

class BankAccount {
private:
    string gmail;
    string password;
    float balance;

public:
    string name;
    int accountNumber;

    // Parameterized constructor
    BankAccount(string n, int accNo, string g, string p, float b) {
        name = n;
        accountNumber = accNo;
        gmail = g;
        password = p;
        balance = b;
    }

    void showAccountInfo() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Gmail: " << gmail << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount user1("Mridul", 101, "mridul@gmail.com", "12345", 500);
    BankAccount user2("Atik", 102, "atik@gmail.com", "54321", 1000);

    user1.showAccountInfo();
    cout << "-----------------" << endl;
    user2.showAccountInfo();

    return 0;
}
