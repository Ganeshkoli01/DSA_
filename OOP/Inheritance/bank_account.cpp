#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    // Deposit money
    void deposit(double amount) {
        balance = balance + amount;
        cout << "Amount deposited: " << amount << endl;
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    // Get current balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc(101, 5000);

    acc.deposit(2000);
    acc.withdraw(1500);

    cout << "Current Balance: " << acc.getBalance() << endl;

    return 0;
}
