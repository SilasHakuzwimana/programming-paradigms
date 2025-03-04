#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
using namespace std;

class Client {
protected:
    string name;
public:
    Client(string n) : name(n) {}
    virtual double getTotalCost() = 0;  // Pure virtual function
    virtual void display() = 0;
    virtual ~Client() {}
};
#endif
