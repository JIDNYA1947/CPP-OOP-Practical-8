#include <iostream>
using namespace std;

int main()
{
    int balance = 10000;
    int amount;

    cout << "Welcome to Bank";
    cout << "\nAccount Balance: Rs. " << balance;
    cout << "\nEnter withdrawal amount: ";
    cin >> amount;

    try
    {
        if (amount <= 0)
            throw 1;

        if (amount > balance)
            throw 2;

        balance = balance - amount;

        cout << "\nWithdrawal Successful!";
        cout << "\nRemaining Balance: Rs. " << balance;
    }

    catch (int x)
    {
        if (x == 1)
            cout << "\nInvalid withdrawal amount.";
        else if (x == 2)
            cout << "\nInsufficient balance!";
    }

    cout << "\nThank you for banking with us.";

    return 0;
}
