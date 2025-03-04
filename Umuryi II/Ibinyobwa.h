#ifndef IBINYOBWA_H
#define IBINYOBWA_H

class Ibinyobwa {
private:
    double price;
public:
    Ibinyobwa(double p) : price(p) {}
    double getPrice() const { return price; }
};

#endif
