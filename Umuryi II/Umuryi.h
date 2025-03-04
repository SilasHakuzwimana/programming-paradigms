#ifndef UMURYI_H
#define UMURYI_H

#include "Client.h"
#include "Ibiribwa.h"
using namespace std;

class Umuryi : public Client
{
private:
    Ibiribwa food;

public:
    Umuryi(string n, double foodPrice) : Client(n), food(foodPrice) {}
    double getTotalCost() override
    {
        return food.getPrice();
    }
    void display() override
    {
        cout << name << " (Umuryi) pays: " << getTotalCost() << " RWF\n";
    }
};

#endif
