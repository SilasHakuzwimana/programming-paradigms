#include "Umuryi.h"

Umuryi::Umuryi(string name, double balance) : Umukiriya(name, balance) {}

void Umuryi::eat(Ibiribwa food) {
    cout << name << " is eating..." << endl;
    pay(food.getFoodPrice());
}
