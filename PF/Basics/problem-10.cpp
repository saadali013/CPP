
// C++ program to calculate the number of complete groups of 5 students and the remaining students from a total of 47 students.
#include <iostream>
using namespace std;
int main(){

int totalstudents=47;
int groupmembers=5;
int compeltegroups, remain;

compeltegroups=totalstudents/groupmembers;
remain=totalstudents%groupmembers;

cout<<"These are complete groups of 5: "<<compeltegroups<<"\n";
cout<<"These are Remaining Students: "<<remain;

    return 0;
}