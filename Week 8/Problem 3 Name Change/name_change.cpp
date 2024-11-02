#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student {
    long int NISN;
    string name;
    int value;
};

int main() {
    // variables
    vector<student> students = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };
    bool found = false;
    int query = 60;
    string new_name = "Joko";
    
    // sequential search
    for (int i = 0; i < students.size(); i++) {
        if (students[i].value == query) {
            students[i].name = new_name;
            found = true;
        }
    }
    
    // output
    cout << "Updated Student List: " << endl;
    for (int i = 0; i < students.size(); i++) {
        cout << students[i].NISN << ", " << students[i].name << ", " << students[i].value << endl;
    }
    
    if (!found) {
        cout << "Student not found" << endl;
    }

    return 0;
}
