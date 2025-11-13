#include <iostream>
using namespace std;

class TollBooth {
private:
    int cars;
    float money;

public:
    TollBooth() {
        cars = 0;
        money = 0.0;
    }
    void payingCar() {
        cars++;
        money = money + 0.50;
    }

    void nonPayingCar() {
        cars++;
    }

    void display() {
        cout << "Total cars = " << cars << endl;
        cout << "Total money = " << money << endl;
    }
};

int main() {
    TollBooth t;

    t.payingCar();     
    t.payingCar();     
    t.nonPayingCar();  

    t.display();

    return 0;
}