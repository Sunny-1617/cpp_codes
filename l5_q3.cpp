#include <iostream>
using namespace std;

class Verify {
private:
    void privateFunc() {
        cout << "This is private." << endl;
    }
public:
    void publicFunc() {
        cout << "This is public." << endl;
    }
};

int main() {
    Verify obj;
    obj.publicFunc(); // This works

    // TO VERIFY Q3: Uncomment the line below. 
    // Dev-C++ will show an error because privateFunc is hidden.
    // obj.privateFunc(); 

    cout << "Verification complete: Private functions cannot be called in main." << endl;
    return 0;
}

