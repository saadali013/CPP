
// Program to calculate the remaining amount of money after spending on food, transport and books.

#include<iostream>
using namespace std;
int main(){


    int totalamount=5000;
    int food=850, transport=600, books=1200, remain;

        remain=(totalamount-(food + transport + books));

    cout<<"Remaining amount is this: "<<remain;

    return 0;
}