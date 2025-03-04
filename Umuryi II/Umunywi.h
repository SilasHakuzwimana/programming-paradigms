#ifndef UMUNYWI_H
#define UMUNYWI_H

#include "Client.h"
#include "Ibinyobwa.h"
using namespace std;

class Umunywi : public Client
{
private:
    Ibinyobwa drink;

public:
    Umunywi(string n, double drinkPrice) : Client(n), drink(drinkPrice) {}
    double getTotalCost() override { return drink.getPrice(); }
    void display() override
    {
        cout << name << " (Umunywi) pays: " << getTotalCost() << " RWF\n";
    }
};

#endif
