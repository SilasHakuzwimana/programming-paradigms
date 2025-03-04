#ifndef IBIRIBWA_H
#define IBIRIBWA_H

class Ibiribwa {
private:
    double price;
public:
    Ibiribwa(double p) : price(p) {}
    double getPrice() const { return price; }
};

#endif
