#include <iostream>
using namespace std;

class Time
{
private:
    int h, m, s;

    void adjust()
    {
        if (s >= 60) { s -= 60; m++; }
        if (m >= 60) { m -= 60; h++; }
        if (s < 0) { s += 60; m--; }
        if (m < 0) { m += 60; h--; }
        if (h < 0) h = 0;
    }

public:
    Time()
    {
        h = 0;
        m = 0;
        s = 0;
    }

    Time(int hh, int mm, int ss)
    {
        h = hh;
        m = mm;
        s = ss;
    }

    void show()
    {
        cout << h << ":" << m << ":" << s << endl;
    }

    Time operator++()
    {
        s++;
        adjust();
        return *this;
    }

    Time operator++(int)
    {
        Time temp = *this;
        s++;
        adjust();
        return temp;
    }

    Time operator--()
    {
        s--;
        adjust();
        return *this;
    }

    Time operator--(int)
    {
        Time temp = *this;
        s--;
        adjust();
        return temp;
    }
};

int main()
{
    Time t1(1, 59, 58);

    t1.show();
    ++t1;
    t1.show();
    t1++;
    t1.show();
    --t1;
    t1.show();
    t1--;
    t1.show();

    return 0;
}
