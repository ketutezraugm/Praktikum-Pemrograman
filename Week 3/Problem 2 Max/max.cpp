#include <iostream>
using namespace std;

int main() {
    // variables
    int num, high, i; 
    
    // input
    for (i=0; i < 3; i++) {
        cout << "Enter a number : "; 
        cin >> num; 
    
    if (num > high) {
        high = num; 
    }
    }
    
    cout << "The largest number is : " << high;
    
    return 0;
}
