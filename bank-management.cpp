#include <iostream>
using namespace std;

class BankAccount {
    int balance;

public:
    BankAccount() : balance(0) {}

    void deposit(int amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(int amount) {
        if (amount > balance)
            cout << "Insufficient balance!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void checkBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.deposit(1000);
    account.withdraw(500);
    account.checkBalance();
    return 0;
}
