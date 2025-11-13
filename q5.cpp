#include <iostream>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

public:
    void getDate()
    {
        char c1, c2;
        cin >> month >> c1 >> day >> c2 >> year;
    }

    void showDate()
    {
        cout << month << "/" << day << "/" << year;
    }
};

int main()
{
    Date d;
    d.getDate();
    d.showDate();
    return 0;
}