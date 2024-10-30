#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student {
    long int NISN;
    string name;
    int value;
};

void bubble_sort_NISN(vector<student> &students) {
    int datasize = students.size();
    for (int i=0; i<datasize-1; i++) {
        for (int j=0; j<datasize-1; j++) {
            if (students[j].NISN<students[j+1].NISN) 
                swap(students[j], students[j+1]);
        }
    }
}

void bubble_sort_value(vector<student> &students) {
    int datasize = students.size();
    for (int i=0; i<datasize-1; i++) {
        for (int j=0; j<datasize-1; j++) {
            if (students[j].value<students[j+1].value) 
                swap(students[j], students[j+1]);
        }
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
    bubble_sort_NISN(students);
    cout << "NISN Bubble Sort (Descending): " << endl;
    for (int i=0; i<datasize; i++) {
        cout << students[i].NISN << ", " << students[i].name << ", " << students[i].value << endl;
    }

    // sorted based on value
    bubble_sort_value(students);
    cout << "\nValue Bubble Sort (Descending): " << endl;
    for (int i=0; i<datasize; i++) {
        cout << students[i].NISN << ", " << students[i].name << ", " << students[i].value << endl;
    }

    return 0;
}
