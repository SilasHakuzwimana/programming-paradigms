#ifndef IBINYABUZIMA_H
#define IBINYABUZIMA_H

#include <iostream>
using namespace std;

// Base class
class Ibinyabuzima {
protected:
    string name;

public:
    Ibinyabuzima(string n); // Constructor
    virtual void display(); // Virtual function
};

#endif
