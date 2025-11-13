#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }

    Distance operator-(Distance d2)
    {
        Distance temp;
        temp.feet = feet - d2.feet;
        temp.inches = inches - d2.inches;

        if (temp.inches < 0)
        {
            temp.inches += 12;
            temp.feet--;
        }
        return temp;
    }

    void getdist()
    {
        cin >> feet;
        cin >> inches;
    }

    void showdist()
    {
        cout << feet << "'-" << inches << "\"";
    }
};

int main()
{
    Distance dist1, dist2, dist3;

    dist1.getdist();
    dist2.getdist();

    dist3 = dist1 - dist2;

    dist3.showdist();

    return 0;
}
