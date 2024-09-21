#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // variables
    int a,b,c; 
    
    // input
    cout << "Enter value of a : "; 
    cin >> a; 
    cout << "\nEnter value of b : "; 
    cin >> b;
    cout << "\nEnter value of c : "; 
    cin >> c; 

    // operations
    float disc = (b*b) - (4*a*c); 
    
    if (disc > 0) { 
        float sqdisc = sqrt(disc);
        float xa = (-b + sqdisc) / (2*a);
        float xb = (-b - sqdisc) / (2*a); 
        cout << "\nThe first root is " << xa; 
        cout << "\nThe second root is " << xb; 
    }
    else if (disc == 0) { 
        float x = -b/(2*a); 
        cout << "\nThe root is " << x; 
    }
    else if (disc < 0) {
        cout << "\nThere are no real roots (the roots are complex)";
    }
    
    return 0;
}
