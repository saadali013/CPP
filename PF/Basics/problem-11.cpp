// This program calculates the total amount spent on food, decorations, and printing for an event, determines the remaining budget, and divides the remaining amount among volunteers, also calculating any leftover money.

#include <iostream>
using namespace std;

int main() {

    int budget = 10000;
    int food = 2750, decorations = 1500, printing = 850;
    int totalSpent, remainingAmount;
    int volunteerAmount, remainingMoney;

    totalSpent = food + decorations + printing;
    remainingAmount = budget - totalSpent;
    volunteerAmount = remainingAmount / 5;
    remainingMoney = remainingAmount % 5;

    cout << "Total amount spent: " << totalSpent << "\n";
    cout << "Remaining amount: " << remainingAmount << "\n";
    cout << "Amount for each volunteer: " << volunteerAmount << "\n";
    cout << "Money left after division: " << remainingMoney;

    return 0;
}