#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double accountBalance;

public:
    BankAccount(string accNumber, string accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        accountBalance = initialBalance;
    }

    void deposit(double amount) {
        accountBalance += amount;
        cout << "Deposited " << amount << " successfully. New balance: " << accountBalance << endl;
    }

    void withdraw(double amount) {
        if (amount > accountBalance) {
            cout << "Insufficient funds!" << endl;
        } else {
            accountBalance -= amount;
            cout << "Withdrawn " << amount << " successfully. New balance: " << accountBalance << endl;
        }
    }

    void displayBalance() {
        cout << "Account Balance: " << accountBalance << endl;
    }
};

int main() {
    BankAccount myAccount("123456789", "John Doe", 1000.0);

    myAccount.displayBalance(); // Output: Account Balance: 1000

    myAccount.deposit(500.0); // Output: Deposited 500 successfully. New balance: 1500

    myAccount.withdraw(200.0); // Output: Withdrawn 200 successfully. New balance: 1300

    myAccount.withdraw(2000.0); // Output: Insufficient funds!

    return 0;
}
