#include <iostream>
using namespace std;

class Employee
{
private:
    int empNo;
    float compensation;

public:
    void getData()
    {
        cin >> empNo;
        cin >> compensation;
    }

    void display()
    {
        cout << empNo << " " << compensation << endl;
    }
};

int main()
{
    Employee e1, e2, e3;

    e1.getData();
    e2.getData();
    e3.getData();

    e1.display();
    e2.display();
    e3.display();

    return 0;
}