#include <iostream>
using namespace std;

class Vehicle
{
public:
    string name;

    void printName(string name)
    {
        cout << "My name is " << name << endl;
    }
};

class Car : public Vehicle
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};

int main()
{

    Car c;
    string names;
    cout << "Enter your names: ";
    cin >> names;
    c.printName(names); //inherited from "Vehicle" Class
    int value = c.add(3, 5); // Defined with "Car" Class
    cout << "The result is " << value << endl;

    return 0;
}