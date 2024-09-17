#include <iostream>
using namespace std;

int main() {
    //variables
    int n,i,c;
    
    //input
    cout << "Enter a number: ";
    cin >> n;
    
    // operation
    for (i=1; i<=10; i++) {
        c = n*i;
        cout << n << " x " << i << " = " << c << endl;
    }
    
    return 0;
}
