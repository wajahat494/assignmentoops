#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void add(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

        if (seconds >= 60)
        {
            seconds = seconds - 60;
            minutes++;
        }

        if (minutes >= 60)
        {
            minutes = minutes - 60;
            hours++;
        }
    }

    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds;
    }
};

int main()
{
    Time t1(1, 40, 30);
    Time t2(2, 25, 45);
    Time t3;

    t3.add(t1, t2);
    t3.display();

    return 0;
}