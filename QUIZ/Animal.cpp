#include "Animal.h"

// Constructor implementation
Animal::Animal(string n, string s) : Ibinyabuzima(n) {
    species = s;
}

// Override display function
void Animal::display() {
    cout << "This is an animal named " << name << " and it belongs to the " << species << " species." << endl;
}
