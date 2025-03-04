#include "Umunywi.h"

Umunywi::Umunywi(string name, double balance) : Umukiriya(name, balance) {}

void Umunywi::drink(Ibinyobwa drink) {
    cout << name << " is drinking..." << endl;
    pay(drink.getDrinkPrice());
}
