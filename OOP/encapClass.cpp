#include <iostream>
using namespace std;

class Student
{
private:
    string names;
    int age;

public:
    void setData(string n, int a)
    {
        // names = n;
        // age = a;
        
        // Using "this" keyword

        this->names=n;
        this->age = a;
    }
    void displayData()
    {
        cout << "Name: " << names << ", Age: " << age << endl;
    }
};

int main()
{
    Student s1;
    s1.setData("Silas", 23);
    s1.displayData();

    return 0;
}