#include <iostream>
#include <vector>
using namespace std;

int main() {
    // variables
    vector<int> vector;
    
    // print 1-100
    for (int i=1; i<=100; i++) {
        // print fizzbuzz
        if (i%3==0 and i%5==0) {
            vector.push_back(i);
            cout << "FizzBuzz" << endl;
        }
        // print fizz
        else if(i%3==0)
            cout << "Fizz" << endl;
        // print buzz
        else if (i%5==0)
            cout << "Buzz" << endl;
        // other
        else 
            cout << i << endl;
    }
    
    return 0;
}
