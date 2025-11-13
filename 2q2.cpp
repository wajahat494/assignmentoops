#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    enum { MAX = 80 };
    char str[MAX];

public:
    String()
    {
        str[0] = '\0';
    }

    String(char s[])
    {
        strcpy(str, s);
    }

    String operator+=(String s2)
    {
        strcat(str, s2.str);
        return *this;
    }

    void show()
    {
        cout << str;
    }
};

int main()
{
    char s1[80], s2[80];

    cin.getline(s1, 80);
    cin.getline(s2, 80);

    String str1(s1), str2(s2), str3;

    str3 = str1 += str2;

    str1.show();
    cout << endl;
    str3.show();

    return 0;
}
