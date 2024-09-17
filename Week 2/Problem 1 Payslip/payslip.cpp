#include <iostream>
using namespace std;

int main() {
    // header
    cout << "Payslip for Employee";
    cout << "\n----------------------";
    
    // variables
    char name[20];
    int sal;
    double tax = 0.2;
    int instal = 165000;
    int insur = 78000;
    
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
