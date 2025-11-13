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

enum etype { laborer, secretary, manager, accountant, executive, researcher };

class Employee
{
private:
    int empNo;
    float compensation;
    Date hireDate;
    etype empType;

public:
    void getEmploy()
    {
        char ch;
        cin >> empNo;
        cin >> compensation;
        hireDate.getDate();
        cin >> ch;

        switch (ch)
        {
        case 'l': empType = laborer; break;
        case 's': empType = secretary; break;
        case 'm': empType = manager; break;
        case 'a': empType = accountant; break;
        case 'e': empType = executive; break;
        case 'r': empType = researcher; break;
        default: empType = laborer;
        }
    }

    void putEmploy()
    {
        cout << empNo << endl;
        cout << compensation << endl;
        hireDate.showDate();
        cout << endl;

        switch (empType)
        {
        case laborer: cout << "Laborer"; break;
        case secretary: cout << "Secretary"; break;
        case manager: cout << "Manager"; break;
        case accountant: cout << "Accountant"; break;
        case executive: cout << "Executive"; break;
        case researcher: cout << "Researcher"; break;
        }
        cout << endl;
    }
};

int main()
{
    Employee e1, e2, e3;

    e1.getEmploy();
    e2.getEmploy();
    e3.getEmploy();

    e1.putEmploy();
    e2.putEmploy();
    e3.putEmploy();

    return 0;
}