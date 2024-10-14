#include <iostream>
using namespace std;

struct data {
    int nim,uts,uas;
};

int main() {
    // variables
    int i,N,avg;
    struct data student[50];
    
    // input N
    cout << "Enter the number of students: ";
    cin >> N;
    
    if (N<=50) {
        for (i=0; i<N; i++) { 
        //input data
        cout << "\nEnter the NIM: ";
        cin >> student[i].nim;
        cout << "Enter UTS Value: ";
        cin >> student[i].uts;
        cout << "Enter the UAS Value: ";
        cin >> student[i].uas;
        cout << "----------------------------------" << endl;
    
        // process
        avg = (student[i].uts+student[i].uas)/2;
        
        // output
        cout << "NIM: " << student[i].nim << endl;
        cout << "Average: " << avg << endl;
    }
    }
    else {
        cout << "Data is over 50!";
        return 0;
    }
}
