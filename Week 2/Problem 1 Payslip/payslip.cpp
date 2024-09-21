#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string payslip(int n) {
    // header
    cout << "Payslip for Employee";
    cout << "\n----------------------";
    
    // variables
    string name;
    int sal;
    double tax = 0.2;
    int instal = 200000;
    int insur = 150000;
    
    // input name
    cout << "\nName: ";
    cin >> name;
    
    // input salary
    cout << "Gross Salary: Rp";
    cin >> sal;
    
    // operations
    int netax = sal*tax;
    int net = sal-(netax+instal+insur);
    
    // print
    cout << "Tax (20%): Rp" << netax;
    cout << "\nInstallment: Rp" << instal;
    cout << "\nInsurance: Rp" << insur;
    cout << "\nNet Salary: Rp" << net;
    
    return 0;
}

int main() {
    ifstream testFile("payslip.txt");
    int input;
    string expected_output;

    if (!testFile) {
        cerr << "Error: Could not open test.txt" << std::endl;
        return 1;
    }

    int test_num = 1;
    while (testFile >> input && getline(testFile >> ws, expected_output)) {
        string output = payslip(input);
        if (output == expected_output) {
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            cout << "Test " << test_num << " failed. Expected: \"" 
                      << expected_output << "\", Got: \"" << output << "\"" << endl;
        }
        test_num++;
    }

    testFile.close();
    return 0;
}
