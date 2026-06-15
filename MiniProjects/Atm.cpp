#include <iostream>
using namespace std;

void ShowMenu() {
    cout << "\n===== Rakesh ATM =====\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";
}

void CheckBalance(int &money) {
    cout << "Current Balance: ₹" << money << endl;
}

void DepositMoney(int &money) {
    int deposit;

    cout << "Enter amount to deposit: ";
    cin >> deposit;

    if (deposit <= 0) {
        cout << "Please enter a valid amount.\n";
        return;
    }

    money += deposit;

    cout << "₹" << deposit << " deposited successfully.\n";
    cout << "Current Balance: ₹" << money << endl;
}

void WithdrawMoney(int &money) {
    int withdraw;

    cout << "Enter amount to withdraw: ";
    cin >> withdraw;

    if (withdraw <= 0) {
        cout << "Please enter a valid amount.\n";
        return;
    }

    if (withdraw <= money) {
        money -= withdraw;

        cout << "₹" << withdraw << " withdrawn successfully.\n";
        cout << "Current Balance: ₹" << money << endl;
    } else {
        cout << "Insufficient Balance.\n";
    }
}

int main() {
    int money = 0;
    int userInput;

    while (true) {
        ShowMenu();

        cout << "Enter your choice (1-4): ";
        cin >> userInput;

        switch (userInput) {
            case 1:
                CheckBalance(money);
                break;

            case 2:
                DepositMoney(money);
                break;

            case 3:
                WithdrawMoney(money);
                break;

            case 4:
                cout << "Thank you for using Rakesh ATM!\n";
                return 0;

            default:
                cout << "Invalid choice. Please enter 1-4.\n";
        }
    }
}