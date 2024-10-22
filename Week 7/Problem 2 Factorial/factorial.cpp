#include <iostream>
using namespace std;

int factorial(int x) {
    int c = 1;
    
    for (int i=2; i<=x; i++) {
        c = c*i;
    }
    return c;
}

int main() {
    // variables
    int x;
    
    // inputs
    cout << "Enter a number: ";
    cin >> x;
    
    // process
    factorial(x);
    cout << x << "! = " << factorial(x);
    
    return 0;
}
