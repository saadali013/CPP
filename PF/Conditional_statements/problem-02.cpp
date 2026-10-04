
#include <iostream>
using namespace std;

int main() {
    int matric, intermediate, entryTest;

    cout << "Enter Matric percentage: ";
    cin >> matric;

    cout << "Enter Intermediate percentage: ";
    cin >> intermediate;

    cout << "Enter Entry Test score: ";
    cin >> entryTest;

    if (matric < 0 || matric > 100 ||
        intermediate < 0 || intermediate > 100 ||
        entryTest < 0 || entryTest > 100) {

        cout << "Invalid Input";
    }
    else if (matric < 60 ||
             intermediate < 65 ||
             entryTest < 70) {

        cout << "Admission Rejected";
    }
    else {
        cout << "Eligible for Admission";
    }

    return 0;
}