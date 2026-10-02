

#include<iostream>
using namespace std;

int main (){
    string student_name;
    int age;
    float marks;

    cout<<"Enter The Name of Student: ";
    getline(cin, student_name);
    cout<<"Enter the Age of the Student: ";
    cin>>age;
    cout<<"Enter the Marks of the Student: ";
    cin>>marks;

    cout<<"Student Name: "<<student_name<<"\n";
    cout<<"Student Age: "<<age<<"\n";
    cout<<"These are the marks of the student: "<<marks<<"\n";


    return 0;
}