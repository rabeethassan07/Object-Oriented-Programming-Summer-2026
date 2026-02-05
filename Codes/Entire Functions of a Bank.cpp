#include<iostream>
using namespace std;
class BankAccount
{
private:
    float balance;
    int transactions;

public:
    // Constructor
    BankAccount()
	{
        balance = 0;
        transactions = 0;
    }

    // Deposit money
    void deposit(float amount)
	{
        if (amount > 0)
		{
            balance += amount;
            transactions++;
            cout << "Deposit successful.\n";
        }
		else
		{
            cout << "Invalid deposit amount.\n";
        }
    }
    // Withdraw money
    void withdraw(float amount)
	{
        if (amount > 0 && amount <= balance)
		{
            balance -= amount;
            transactions++;
            cout << "Withdrawal successful.\n";
        }
		else
		{
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    // Display current balance
    void showBalance()
	{
        cout << "Current Balance: " << balance << endl;
    }
    // Display number of transactions
    void showTransactions()
	{
        cout << "Total Transactions: " << transactions << endl;
    }
};

int main()
{
    BankAccount account;
    int choice;
    float amount;

    do
	{
        cout << "\n--- ABC Bank Menu ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Show Balance\n";
        cout << "4. Show Transactions\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice)
		{
        case 1:
            cout << "Enter deposit amount: ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 2:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            account.withdraw(amount);
            break;

        case 3:
            account.showBalance();
            break;

        case 4:
            account.showTransactions();
            break;

        case 5:
            cout << "Thank you for using ABC Bank.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }
    }
	while (choice != 5);
    return 0;
}
