#include <iostream>
using namespace std;

class Time
{
private:
    int h, m, s;

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

    void getTime()
    {
        cin >> h >> m >> s;
    }

    void showTime()
    {
        cout << h << ":" << m << ":" << s;
    }

    Time operator+(Time t2)
    {
        Time temp;
        temp.s = s + t2.s;
        temp.m = m + t2.m;
        temp.h = h + t2.h;

        if (temp.s >= 60)
        {
            temp.s -= 60;
            temp.m++;
        }

        if (temp.m >= 60)
        {
            temp.m -= 60;
            temp.h++;
        }

        return temp;
    }
};

int main()
{
    Time t1, t2, t3;

    t1.getTime();
    t2.getTime();

    t3 = t1 + t2;

    t3.showTime();

    return 0;
}
