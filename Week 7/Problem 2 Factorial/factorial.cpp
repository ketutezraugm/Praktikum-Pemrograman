#include <iostream>
using namespace std;

int factorial(int x) {
    if (x==0 || x==1)
        return 1;
    else
        return x*factorial((x-1));
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
