
//Write a C++ program to find the size of different data types.

#include<iostream>
using namespace std;
int main(){

 int i;
 float f;
 double d;
 char c;
 bool b;
 string s;

cout<<"This Size of integer: "<<sizeof(i)<<"\n";
cout<<"This Size of Float: "<<sizeof(f)<<"\n";
cout<<"This Size of Double: "<<sizeof(d)<<"\n";
cout<<"This Size of Char: "<<sizeof(c)<<"\n";
cout<<"This Size of Bool: "<<sizeof(b)<<"\n";
cout<<"This Size of String: "<<sizeof(s)<<"\n";


    return 0;
}