#include "Ibiribwa.h"

Ibiribwa::Ibiribwa(double price) : foodPrice(price) {}

double Ibiribwa::getFoodPrice() const {
    return foodPrice;
}
