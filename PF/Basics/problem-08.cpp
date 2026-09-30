// C++ program to calculate the average marks of a student in four subjects.

#include<iostream>
using namespace std;
int main(){

    int sub1=80, sub2=75, sub3=90, sub4=85;
    float avg;
    avg=(sub1+sub2+sub3+sub4)/4;

    cout<<"This your Average Marks: "<<avg;

    return 0;
}