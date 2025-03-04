#include "Umuryi.h"
#include "Umunywi.h"

int main() {
    // Creating an Umuryi and Umunywi
    Umuryi eater("John", 100);
    Umunywi drinker("Alice", 50);

    // Creating food and drinks
    Ibiribwa burger(20);
    Ibinyobwa soda(10);

    // Performing transactions
    eater.eat(burger);  // John should pay 20
    drinker.drink(soda); // Alice should pay 10

    return 0;
}