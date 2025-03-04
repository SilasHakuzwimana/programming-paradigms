#ifndef ANIMAL_H
#define ANIMAL_H

#include "Ibinyabuzima.h"

// Derived class (Subclass)
class Animal : public Ibinyabuzima {
private:
    string species;

public:
    Animal(string n, string s); // Constructor
    void display() override; // Override base class function
};

#endif
