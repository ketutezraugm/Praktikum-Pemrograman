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
    // variable
    int x;
    
    // input
    cout << "Enter a number: ";
    cin >> x;
    
    // output
    cout << x << "! = " << factorial(x);
    
    return 0;
}
