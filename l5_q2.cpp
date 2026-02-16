#include <iostream>
using namespace std;

class SampleP {
private:
    void function2() {
        cout << "Inside Private Function 2" << endl;
        function3();
    }

    void function3() {
        cout << "Inside Private Function 3" << endl;
        function4();
    }

    void function4() {
        cout << "Inside Private Function 4" << endl;
    }

public:
    void function1() {
        cout << "Inside Public Function 1" << endl;
        function2();
    }
};

int main() {
    SampleP BB;
    BB.function1();
    return 0;
}
