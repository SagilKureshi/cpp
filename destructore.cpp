#include <iostream>
using namespace std;

class sk {
public:
    sk() { cout << "Constructor called\n"; }
    ~sk() { cout << "Destructor called\n"; }
};

int main() {
    sk d;
    return 0;
}