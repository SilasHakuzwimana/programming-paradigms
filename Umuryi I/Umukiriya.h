#ifndef UMUKIRIYA_H
#define UMUKIRIYA_H

#include <iostream>
#include <string>
using namespace std;

class Umukiriya {
protected:
    string name;
    double balance;

public:
    Umukiriya(string name, double balance);
    void pay(double amount);
    double getBalance() const;
    string getName() const;
};

#endif
