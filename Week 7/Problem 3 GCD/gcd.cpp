#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) 
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    // variables
    int a,b;
    
    // inputs
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    
    // output
    cout << "The Greater Common Division of " << "(" << a << ", " << b << ") is " << gcd(a,b);
    
    return 0;
}
