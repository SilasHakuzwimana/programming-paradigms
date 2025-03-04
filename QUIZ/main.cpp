#include "Ibinyabuzima.h"
#include "Animal.h"

int main() {
    Ibinyabuzima obj1("Mushroom"); // Base class object
    obj1.display();

    Animal obj2("Human", "Animalia"); // Subclass object
    obj2.display();

    return 0;
}
