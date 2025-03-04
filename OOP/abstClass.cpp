#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape
{
    void draw()
    {
        cout << "Drawing a rectangle." << endl;
    }
};

int main(){

    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw();
    s2->draw();

    
    return 0;
}