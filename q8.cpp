#include <iostream>
using namespace std;

class serial
{
private:
    static int count;
    int number;

public:
    serial()
    {
        count++;
        number = count;
    }

    void show()
    {
        cout << "I am object number " << number << endl;
    }
};

int serial::count = 0;

int main()
{
    serial s1, s2, s3;

    s1.show();
    s2.show();
    s3.show();

    return 0;
}
