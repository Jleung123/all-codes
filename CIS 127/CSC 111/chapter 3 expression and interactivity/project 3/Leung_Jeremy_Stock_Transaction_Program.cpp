/*
This program will preform the calculations for
*/

// Jeremy Leung

#include <iostream>
using namespace std;

// Define variables
int sharesPurchased = 1000;
double pricePerShare = 45.5;
double comission = 0.02;
double pricePerShareSold = 56.9;

int main()
{
    //calculations
    double purcahsedPrice = sharesPurchased * pricePerShare;
    double firstCommission = (sharesPurchased * pricePerShare) * comission;
    double soldPrice = sharesPurchased * pricePerShareSold;
    double secondCommission = (sharesPurchased * pricePerShareSold) * comission;
    double profit = soldPrice - secondCommission - purcahsedPrice - firstCommission;

    //Output statements
    cout << "Purchase Price: $" << purcahsedPrice << endl;
    cout << "Purchase Commission: $" << firstCommission << endl;
    cout << "Sale Price: $" << soldPrice << endl;
    cout << "Sale Commission: $" << secondCommission << endl;
    cout << "Profit: $" << profit << endl;

	return 0;
}
