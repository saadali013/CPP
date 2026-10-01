// This program calculates the total expenses from a given salary and various expense categories, then computes the remaining salary after expenses.

#include <iostream>
using namespace std;
int main() {

    int salary = 60000;
    int rent = 20000, food = 12000, transport = 5000, bills = 8000;
    int totalExpenses, remainingSalary;

    totalExpenses = rent + food + transport + bills;
    remainingSalary = salary - totalExpenses;

    cout << "Total expenses: " << totalExpenses << "\n";
    cout << "Remaining salary: " << remainingSalary;

    return 0;
}