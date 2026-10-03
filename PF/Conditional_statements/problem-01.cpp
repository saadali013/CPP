#include<iostream>
using namespace std;
int main (){

    int balance=80000;
    int daily_withdrawlimit=50000;
    int amount, remain_balance;

    cout<<"Enter the amount do you want to Withdraw: ";
    cin>>amount;

    if(amount<=0){
        cout<<"Invalid The amount you Enter is in Valid: ";
    }
    else if (amount > daily_withdrawlimit) {
        cout << "Daily withdrawal limit exceeded";
    }
    else if (amount > balance) {
        cout << "Insufficient balance";
    }

    else{
        remain_balance = balance-amount;

        cout<<"The Amount you Withdraw is: "<<amount<<endl;
        cout<<"This your Remainning Balance: "<<remain_balance;
    }
    



    return 0;
}