#include <iostream>
using namespace std;

int main() {
    int balance = 0;
    
    cout << "Welcome to the ATM Simulator!" << endl;
    cout << "1. Check Account Balance" << endl
         << "2. Deposit Funds" << endl
         << "3. Withdraw Funds" << endl
         << "4. Exit" << endl;
    while (true) {
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case (1):
                cout << "Your current balance is $" << balance << endl << endl;
                break;
            case (2):
                cout << "Enter the amount to deposit: ";
                int deposit;
                cin >> deposit;
                if (deposit <= 0) {
                    cout << "Invalid amount entered. Please enter a positive value." << endl << endl;
                } else {
                    balance += deposit;
                    cout << "$" << deposit << " deposited successfully. Your updated balance is $" << balance << "." << endl << endl;
                }
                break;
            case (3):
                cout << "Enter the amount to withdraw: ";
                int withdraw;
                cin >> withdraw;
                if (withdraw <= 0) {
                    cout << "Invalid amount entered. Please enter a positive value." << endl << endl;
                } else if (withdraw > balance) {
                    cout << "Insufficient funds, your current balance is $" << balance << "." << endl << endl;
                } else {
                    balance -= withdraw;
                    cout << "$" << withdraw << " withdrawn successfully. Your updated balance is $" << balance << "." << endl << endl;
                }
                break;
            case (4):
                cout << "Thankyou for using the ATM Simulator. Have a great day!" << endl;
                return 0;
            default:
                cout << "Error: Invalid choice. Please enter a number between 1 and 4." << endl << endl;
                break;
        }
    }
}