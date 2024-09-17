#include <iostream>
using namespace std;

int main() {
    //variables
    int n,i,c;
    
    //input
    cout << "Enter a number: ";
    cin >> n;
    
    // operation
    for (i=1; i<=n; i++) {
        c += i;
    }
    
    // output
    cout << "Sum = " << c;
    
    return 0;
}
