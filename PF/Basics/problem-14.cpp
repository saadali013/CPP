// This program calculates the total price of items purchased, applies a discount, and divides the final price among three friends, also calculating any remaining amount.

#include <iostream>
using namespace std;

int main() {

    int bag = 3500;
    int keyboard = 2000;
    int mouse = 1200;
    int discount = 500;

    int totalPrice, finalPrice;
    int eachFriend, remainingAmount;

    totalPrice = bag + keyboard + mouse;
    finalPrice = totalPrice - discount;
    eachFriend = finalPrice / 3;
    remainingAmount = finalPrice % 3;

    cout << "Total price: " << totalPrice << "\n";
    cout << "Final price: " << finalPrice << "\n";
    cout << "Each friend pays: " << eachFriend << "\n";
    cout << "Remaining amount: " << remainingAmount;

    return 0;
}