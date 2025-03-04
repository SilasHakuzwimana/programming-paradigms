#ifndef UMUNYWI_H
#define UMUNYWI_H

#include "Umukiriya.h"
#include "Kunywa.h"

class Umunywi : public Umukiriya, public Kunywa {
public:
    Umunywi(string name, double balance);
    void drink(Ibinyobwa drink) override;
};

#endif
