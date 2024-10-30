#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student {
    long int NISN;
    string name;
    int value;
};

void insertion_sort_NISN(vector<student> &students) {
    int datasize = students.size();
    for (int j=1; j<datasize; j++) {
        student temp = students[j];
        int i = j-1;
        while (i>=0 && students[i].NISN<temp.NISN) {
            students[i+1] = students[i];
            i--;
        }
        students[i+1] = temp;
    }
}

void insertion_sort_value(vector<student> &students) {
    int datasize = students.size();
    for (int j=1; j<datasize; j++) {
        student temp = students[j];
        int i = j-1;
        while (i>=0 && students[i].value<temp.value) {
            students[i+1] = students[i];
            i--;
        }
        students[i+1] = temp;
    }
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
    int datasize = students.size();

    // sorted based on NISN
    insertion_sort_NISN(students);
    cout << "NISN Insertion Sort (Descending): " << endl;
    for (int i=0; i<datasize; i++) {
        cout << students[i].NISN << ", " << students[i].name << ", " << students[i].value << endl;
    }

    // sorted based on value
    insertion_sort_value(students);
    cout << "\nValue Insertion Sort (Descending): " << endl;
    for (int i=0; i<datasize; i++) {
        cout << students[i].NISN << ", " << students[i].name << ", " << students[i].value << endl;
    }

    return 0;
}
