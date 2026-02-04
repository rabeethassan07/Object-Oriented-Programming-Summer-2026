#include<iostream>
using namespace std;
int main()
{
    char accountType;
    int accountNumber;
    float withdrawAmount;
    float balance = 200000;
    float charges = 0, tax = 0;
    
    cout << "Enter account type (S for Savings, C for Current): ";
    cin >> accountType;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;

    if (withdrawAmount > 100000)
	{
        cout << "Error: Cannot withdraw more than 100,000 at a time." << endl;
        return 0;
    }
    if (withdrawAmount > balance)
	{
        cout << "Error: Insufficient balance." << endl;
        return 0;
    }
    if (accountType == 'S' || accountType == 's')
	{

        // 2% withdrawal charges
        charges = withdrawAmount * 0.02;
        balance -= (withdrawAmount + charges);

        // 5% tax if withdrawal > 50,000
        if (withdrawAmount > 50000)
		{
            tax = balance * 0.05;
            balance -= tax;
        }

        cout << "\nAccount Type: Savings" << endl;
    }
    // Current Account
    else if (accountType == 'C' || accountType == 'c')
	{

        // Fixed withdrawal fee
        charges = 100;
        balance -= (withdrawAmount + charges);

        // 5% tax if withdrawal > 50,000
        if (withdrawAmount > 50000)
		{
            tax = balance * 0.05;
            balance -= tax;
        }

        cout << "\nAccount Type: Current" << endl;
    }
    
    else
	{
        cout << "Invalid account type!" << endl;
        return 0;
    }
    
    cout << "Account Number: " << accountNumber << endl;
    cout << "Withdrawn Amount: " << withdrawAmount << endl;
    cout << "Charges Deducted: " << charges << endl;
    cout << "Tax Deducted: " << tax << endl;
    cout << "Remaining Balance: " << balance << endl;
    return 0;
}
