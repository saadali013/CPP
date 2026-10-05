#include <iostream>
using namespace std;

int main() {

    int age, days, budget, carType;
    int pricePerDay, totalCost, remainingBudget;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter number of days: ";
    cin >> days;

    cout << "Enter your budget: ";
    cin >> budget;

    cout << "Enter car type (1 = Economy, 2 = SUV, 3 = Luxury): ";
    cin >> carType;

    if (age < 18 || days <= 0 || budget <= 0 ||
        carType < 1 || carType > 3) {

        cout << "Invalid input";
    }

    else if (age < 21) {

        cout << "You must be at least 21 to rent a car";
    }

    else if (carType == 1) {

        pricePerDay = 3000;
        totalCost = pricePerDay * days;

        if (budget < totalCost) {
            cout << "Insufficient budget";
        }
        else {
            remainingBudget = budget - totalCost;

            cout << "Rental approved" << endl;
            cout << "Total cost: " << totalCost << endl;
            cout << "Remaining budget: " << remainingBudget;
        }
    }

    else if (carType == 2) {

        pricePerDay = 5000;
        totalCost = pricePerDay * days;

        if (budget < totalCost) {
            cout << "Insufficient budget";
        }
        else {
            remainingBudget = budget - totalCost;

            cout << "Rental approved" << endl;
            cout << "Total cost: " << totalCost << endl;
            cout << "Remaining budget: " << remainingBudget;
        }
    }

    else {

        pricePerDay = 8000;
        totalCost = pricePerDay * days;

        if (budget < totalCost) {
            cout << "Insufficient budget";
        }
        else {
            remainingBudget = budget - totalCost;

            cout << "Rental approved" << endl;
            cout << "Total cost: " << totalCost << endl;
            cout << "Remaining budget: " << remainingBudget;
        }
    }

    return 0;
}