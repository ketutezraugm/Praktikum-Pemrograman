#include <iostream>
#include <vector>
using namespace std;

int main() {
    // variables
    int i,j;
    int size;
    vector<int> vector;
    
    // fizzbuzz
    // print 1-100
    for (i=1; i<=100;) {
        for (j=0; j<10; j++) {
            // print fizzbuzz
            if (i%3==0 && i%5==0) {
                vector.push_back(i);
                cout << "FizzBuzz ";
            }
            // print fizz
            else if(i%3==0) 
                cout << "Fizz ";
            // print buzz
            else if (i%5==0) 
                cout << "Buzz ";
            // other
            else 
                cout << i << " ";
            i++;
        }
        cout << endl;
    }
    cout << endl;
    
    // reversed vector
    // size of the vector
    size = vector.size();
    
    // reversing the vector
    int reversed_vector[size];
    for (i = 1; i <= size; i++) 
        reversed_vector[i] = vector[size - i];

    // output the reversed vector
    cout << "Reversed Vector: ";
    for (i = 1; i <= size; i++) {
        cout << reversed_vector[i] << " ";
    }

    return 0;
}
