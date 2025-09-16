#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string gmail;
    string password;
    float balance;

public:
    string name;  // public

    // Constructor to initialize balance
    BankAccount() {
        balance = 0.0;
    }

    // Setter function to set account number, gmail, password
    void setAccountInfo(int accNo, string g, string p) {
        accountNumber = accNo;
        gmail = g;
        password = p;
    }

    // Deposit money (public function)
    void deposit(float amount) {
        balance += amount;
        cout << amount << "$ deposited successfully." << endl;
    }

    // Withdraw money (public function)
    void withdraw(float amount) {
        if(amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << amount << "$ withdrawn successfully." << endl;
        }
    }

    // Show account info (safe access to private data)
    void showAccountInfo() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Gmail: " << gmail << endl;
        cout << "Balance: $" << balance << endl;
    }

    // Check balance (int/float return type)
    float checkBalance() {
        return balance;
    }
};

int main() {
    // Multiple accounts support
    BankAccount user1, user2;

    // Account 1
    user1.name = "Mridul";
    user1.setAccountInfo(101, "mridul@gmail.com", "12345");
    user1.deposit(500);  // Deposit
    user1.withdraw(200); // Withdraw
    user1.showAccountInfo();
    cout << "-------------------------" << endl;

    // Account 2
    user2.name = "Atik";
    user2.setAccountInfo(102, "atik@gmail.com", "54321");
    user2.deposit(1000);
    user2.withdraw(1500); // Try to withdraw more than balance
    user2.showAccountInfo();

    return 0;
}
