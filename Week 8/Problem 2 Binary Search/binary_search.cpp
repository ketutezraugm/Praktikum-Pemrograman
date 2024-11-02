#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct student {
    long int NISN;
    string name;
    int value;
};

void bubble_sort_NISN(vector<student> &students) {
    int datasize = students.size();
    for (int i = 0; i < datasize - 1; i++) {
        for (int j = 0; j < datasize - 1; j++) {
            if (students[j].NISN < students[j + 1].NISN) 
                swap(students[j], students[j + 1]);
        }
    }
}

int binary_search(const vector<student> &students, long int targetNISN) {
    int i = 0,j = students.size() - 1,k;

    while (i <= j) {
        k = (i + j) / 2;
        if (students[k].NISN < targetNISN) 
            j = k - 1;
        else if (students[k].NISN == targetNISN) 
            return k;  
        else 
            i = k + 1;
    }
    return -1;
}

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

    // sorting descending by NISN
    bubble_sort_NISN(students);

    // search the student
    long int query = 9950310962;
    int result = binary_search(students, query);

    // output
    if (result != -1) {
        cout << "Student found: " << endl;
        cout << students[result].NISN << ", " << students[result].name << ", " << students[result].value << endl;
    } 
    else 
        cout << "Student not found" << endl;

    return 0;
}
