#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
    void printNumber()
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    Complex c1(5, 3);
    c1.printNumber();
    Complex c2(7);
    c2.printNumber();
    Complex c3;
    c3.printNumber();
}
