#include <iostream>
using namespace std;

class BankAccount {
public:
    string name;
    int balance;

    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void showBalance() {
        cout << "Account Holder: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1;
    acc1.name = "Mridul";
    acc1.balance = 5000;

    acc1.deposit(2000);
    acc1.withdraw(3000);
    acc1.showBalance();

    return 0;
}
