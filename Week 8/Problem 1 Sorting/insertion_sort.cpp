#include <iostream>
#include <vector>

using namespace std;

struct student {
    long int NISN;
    string name;
    int value;
};

void insertion_sort(vector<student> &students) {
    int datasize = students.size();
    for (int j = 1; j < datasize; j++) {
        student temp = students[j];
        int i = j - 1;
        while (i >= 0 && students[i].NISN < temp.NISN) {
            students[i + 1] = students[i];
            i--;
        }
        students[i + 1] = temp;
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
    
    // process
    insertion_sort(students);
    
    // output
    cout << "NISN Insertion Sort (Descending):\n";
    for (int i = 0; i < datasize; i++) {
        cout << students[i].NISN << ", " << students[i].name << ", " << students[i].value << endl;
    }

    return 0;
}
