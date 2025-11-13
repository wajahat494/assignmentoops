#include <iostream>
#include <cstdlib>
using namespace std;

class Int
{
private:
    int value;

    void checkOverflow(long double r)
    {
        if (r > 2147483647.0L || r < -2147483648.0L)
        {
            cout << "Integer overflow detected. Program terminated.";
            exit(1);
        }
    }

public:
    Int()
    {
        value = 0;
    }

    Int(int v)
    {
        value = v;
    }

    void show()
    {
        cout << value;
    }

    Int operator+(Int other)
    {
        long double r = (long double)value + other.value;
        checkOverflow(r);
        return Int((int)r);
    }

    Int operator-(Int other)
    {
        long double r = (long double)value - other.value;
        checkOverflow(r);
        return Int((int)r);
    }

    Int operator*(Int other)
    {
        long double r = (long double)value * other.value;
        checkOverflow(r);
        return Int((int)r);
    }

    Int operator/(Int other)
    {
        if (other.value == 0)
        {
            cout << "Division by zero. Program terminated.";
            exit(1);
        }
        long double r = (long double)value / other.value;
        checkOverflow(r);
        return Int((int)r);
    }
};

int main()
{
    Int a(30000), b(40000), c;

    c = a + b;
    c.show();

    c = a * b;
    c.show();

    return 0;
}
