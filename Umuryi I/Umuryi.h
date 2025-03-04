#ifndef UMURYI_H
#define UMURYI_H

#include "Umukiriya.h"
#include "Kurya.h"

class Umuryi : public Umukiriya, public Kurya {
public:
    Umuryi(string name, double balance);
    void eat(Ibiribwa food) override;
};

#endif
