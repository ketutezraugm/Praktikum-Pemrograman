#include <iostream>
#include <string>
using namespace std;

void add(int a,int b) {
    cout << a << " + " << b << " = " << a+b;
}

void diff(int a,int b) {
    cout << a << " - " << b << " = " << a-b;
}

int main() {
    // variables
    int a,b;
    string op;
    
    // inputs
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    cout << "Select the operation (+/-): ";
    cin >> op;
    
    // process
    if (op=="+")
        add(a,b);
    else if (op=="-")
        diff(a,b);
    
    return 0;
}
