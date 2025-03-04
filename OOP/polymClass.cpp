#include <iostream>
using namespace std;

class Calculate
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
};
class giveResult : public Calculate
{
public:
    float add(float a, int b)
    {
        return a * b;
    }
};
int main()
{
    giveResult g;
    Calculate cal;
    int c = cal.add(4, 6);
    float d = g.add(3.6, 8);
    cout << "Value from Calculate: " << c << endl;
    cout << "Value from giveResult: " << d << endl;

    return 0;
}