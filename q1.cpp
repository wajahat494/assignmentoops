#include <iostream>
using namespace std;

class Int {
private:
    int value;

public:
    Int() {
        value = 0;
    }

    Int(int v) {
        value = v;
    }

    void add(Int a, Int b) {
        value = a.value + b.value;
    }

    void display() {
        cout << value;
    }
};

int main() {
    Int a;
    Int b(10);
    Int c(20);

    a.add(b, c);
    a.display();

    return 0;
}