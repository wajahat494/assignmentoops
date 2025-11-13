#include <iostream>
using namespace std;

class angle
{
private:
    int degrees;
    float minutes;
    char direction;

public:
    angle(int d, float m, char dir)
    {
        degrees = d;
        minutes = m;
        direction = dir;
    }

    void getAngle()
    {
        cin >> degrees >> minutes >> direction;
    }

    void showAngle()
    {
        cout << degrees << "\xF8" << minutes << "' " << direction << endl;
    }
};

int main()
{
    angle a1(149, 34.8, 'W');
    a1.showAngle();

    char choice;
    do
    {
        angle a2(0, 0.0, 'N');
        a2.getAngle();
        a2.showAngle();

        cout << "Continue? (y/n): ";
        cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');

    return 0;
}
