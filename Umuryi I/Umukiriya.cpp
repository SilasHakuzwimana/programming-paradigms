#include "Umukiriya.h"

Umukiriya::Umukiriya(string name, double balance) : name(name), balance(balance) {}

void Umukiriya::pay(double amount) {
    if (balance >= amount) {
        balance -= amount;
        cout << name << " paid " << amount << ". Remaining balance: " << balance << endl;
    } else {
        cout << name << " does not have enough balance to pay " << amount << endl;
    }
}

double Umukiriya::getBalance() const {
    return balance;
}

string Umukiriya::getName() const {
    return name;
}
