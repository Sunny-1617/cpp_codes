#include <iostream>
using namespace std;

class SampleP {
public:
    void function1() {
        cout << "Inside Function 1" << endl;
        function2();
    }

    void function2() {
        cout << "Inside Function 2" << endl;
        function3();
    }

    void function3() {
        cout << "Inside Function 3" << endl;
        function4();
    }

    void function4() {
        cout << "Inside Function 4" << endl;
    }
};

int main() {
    SampleP AA;
    AA.function1();
    return 0;
}
