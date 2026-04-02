#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    double balance;
    string password;

public:
    string accountId;
    string username;

    // Constructor
    Account() : balance(0.0), password("") {}

    // Setters provide controlled access (write)
    void setBalance(double amount) {
        if (amount >= 0.0) {
            balance = amount;
        }
    }

    void setPassword(const string& pwd) {
        if (!pwd.empty()) {
            password = pwd;
        }
    }

    // Getters provide controlled access (read)
    double getBalance() const {
        return balance;
    }

    bool checkPassword(const string& pwd) const {
        return password == pwd;
    }
};

int main() {
    Account acc;
    acc.accountId = "ACC001";
    acc.username = "john_doe";

    acc.setBalance(10000.0);
    acc.setPassword("secure123");

    cout << "Account ID: " << acc.accountId << endl;
    cout << "Username: " << acc.username << endl;
    cout << "Balance: " << acc.getBalance() << endl;

    if (acc.checkPassword("secure123")) {
        cout << "Password verified" << endl;
    } else {
        cout << "Password invalid" << endl;
    }

    return 0;
}