#include <iostream>
#include "Umuryi.h"
#include "Umunywi.h"

int main() {
    Umuryi eater("John", 5000);  // Food price: 5000 RWF
    Umunywi drinker("Alice", 3000);  // Drink price: 3000 RWF

    eater.display();
    drinker.display();

    return 0;
}
