//writing a program to calculate the number of complete groups and remaining students when a total number of students is divided into groups of a certain size.

#include <iostream>
using namespace std;
int main() {

    int totalStudents = 63;
    int groupSize = 4;
    int completeGroups, remainingStudents;

    completeGroups = totalStudents / groupSize;
    remainingStudents = totalStudents % groupSize;

    cout << "Complete groups: " << completeGroups << "\n";
    cout << "Remaining students: " << remainingStudents;

    return 0;
}