 /*
    this program asks the user to input the amount in the savings account,
    the duration of the account and calculate the amount of interest rate earned,
    if the account balance is 0 or below, the account is closed and the program ends.
*/

// Jeremy Leung

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables
    double interestRate, balance = 0, startingBal, deposits, withdraw,
    totalDeposit = 0, totalWithdraw = 0, interestEarned = 0, endingBal = 0, noInterest = 0;
    int months;

    //to round the decimal points by 2
    cout << setprecision(2) << fixed << showpoint;

     /*
        ask user to enter the annual interest rate
        with a while loop as input validation to make sure user can't enter
        a negative value
    */
    cout << "Enter the annual interest rate on the account (e.g. .04): ";
    cin >> interestRate;
    while (interestRate < 0)
    {
        cout << "Interest rate must be non-negative: ";
        cin >> interestRate;
    }

    /*
        ask user to enter the starting balance
        with a while loop as input validation to make sure user can't enter
        a negative value
    */
    cout << "Enter the starting balance: ";
    cin >> startingBal;
    while (startingBal < 0)
    {
        cout << "The balance must be greater than 0: ";
        cin >> startingBal;
    }
    //set balance = to to the starting balance
    balance = startingBal;

    /*
        ask user to enter the amount of months that has passed since the account
        was created with a while loop as input validation to make sure user can't enter
        a negative value
    */
    cout << "How many months have passed since the account was established? ";
    cin >> months;
    while (months < 0 )
    {
        cout << "Number of months must be non-negative: ";
        cin >> months;
    }

    //a for loop to iterate for each month that has passed since the account was created
    for (int i = 1; i <= months; i++)
    {
        /*
            ask user to enter the amount deposited for the current month
            with a while loop as input validation to make sure user can't enter
            a negative value
        */
        cout << "Month " << i << endl;
        cout << "\tTotal deposits for this month: $";
        cin >> deposits;
        while(deposits < 0)
        {
            cout << "\tDeposits must be zero or greater. Please re-enter: ";
            cin >> deposits;
        }
        //update the balance by adding the amount deposited to the balance
        balance += deposits;
        //keep a count of the total amount deposited
        totalDeposit += deposits;

        /*
            ask user to enter the amount withdrawn for the current month
            with a while loop as input validation to make sure user can't enter
            a negative value
        */
        cout << "\tTotal withdrawals for this month: $";
        cin >> withdraw;
        while(withdraw < 0)
        {
            cout << "\tWithdrawals must be zero or greater. Please re-enter: ";
            cin >> withdraw;
        }
        //update the balance by subtracting the amount withdrew to the balance
        balance -= withdraw;
        //keep a count of the total amount withdrawn
        totalWithdraw += withdraw;

        //if statement to check if the balance goes down to 0 or below
        if (balance < 0)
        {
            cout << "The account has a balance of $ " << balance <<
            "\nBecause the balance is negative, the account has been closed." << endl;
            break;
        }

        //update the balance by adding the amount of interest earned to the current balance
        balance += ((interestRate / 12) * balance);

    }

    //calculate the amount earned only by interest
    interestEarned = balance - totalDeposit + totalWithdraw - startingBal;

    //output the results
    cout << "Ending balance:\t\t\t$"<< balance << endl;
    cout << "Amount of deposits:\t\t$" << totalDeposit << endl;
    cout << "Amount of withdrawals:\t\t$" << totalWithdraw << endl;
    cout << "Amount of interest earned:\t$" << interestEarned<< endl;

    return 0;
}
/*
Enter the annual interest rate on the account (e.g. .04): -.04
Interest rate must be non-negative: .04
Enter the starting balance: -1000
The balance must be greater than 0: 1000
How many months have passed since the account was established? -3
Number of months must be non-negative: 3
Month 1
        Total deposits for this month: $-200
        Deposits must be zero or greater. Please re-enter: 200
        Total withdrawals for this month: $-100
        Withdrawals must be zero or greater. Please re-enter: 100
Month 2
        Total deposits for this month: $300
        Total withdrawals for this month: $50
Month 3
        Total deposits for this month: $375.78
        Total withdrawals for this month: $25
Ending balance:                 $1714.66
Amount of deposits:             $875.78
Amount of withdrawals:          $175.00
Amount of interest earned:      $13.88
*/
