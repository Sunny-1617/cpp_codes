#include <iostream>
using namespace std;

class Calculator {
private:
    int a = 5;
    int b = 2;

    void add() { cout << "For +: 5+2=" << (a + b) << endl; }
    void sub() { cout << "For -: 5-2=" << (a - b) << endl; }
    void mul() { cout << "For *: 5*2=" << (a * b) << endl; }
    void div() { cout << "For /: 5/2=" << (a / b) << endl; }
    void mod() { cout << "For %: 5%2=" << (a % b) << endl; }

public:
    void runAllOperations() {
        add();
        sub();
        mul();
        div();
        mod();
    }
};

int main() {
    Calculator myCalc;
    myCalc.runAllOperations();
    return 0;
}
