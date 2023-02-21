#include <iostream>
#include <iomanip>
using namespace std;

// this program calculate the total bull for members on and not on a dental plan

// Jeremy Leung

//global variables for all functions to use

//declare functions
void totalBill(double, double);
void totalBill(double, double, double);

int main()
{
    //declare variable
    double choice, charge, test, medicine;

    //display a menu for the user and ask for a input
	cout << "Please input a one if you are a member of the dental place"
         << "\nInput ant other number if you are not" << endl;
    cin >> choice;

    if (choice == 1)
    {
        //get the service charge from user input
        cout << "please input the service charge"<< endl;
        cin >> charge;

        //get the test charge from user input
        cout << "please input the test charge"<< endl;
        cin >> test;

        //call function totalBull to get the total bill for this condition
        totalBill(charge, test);
    }
    else
    {
        //get the service charge from user input
        cout << "please input the service charge"<< endl;
        cin >> charge;

        //get the test charge from user input
        cout << "please input the test charge"<< endl;
        cin >> test;

        //get the medicine charge from user input
        cout << "please input the medicine charge"<< endl;
        cin >> medicine;

        //call function totalBull to get the total bill for this condition
        totalBill(charge, test, medicine);
    }

	return 0;
}

//function to get the total bill for members on the dental plan
void totalBill(double charge, double test)
{
    //output the result
    cout << "The total bill is $ " << charge + test << endl;
}

//function to get the total bill for members not on the dental plan
void totalBill(double charge, double test, double medicine)
{
    //output the result
    cout << "The total bill is $" << charge + test + medicine << endl;
}
/*
Please input a one if you are a member of the dental place
Input ant other number if you are not
1
please input the service charge
7.89
please input the test charge
89.56
The total bill is $97.45
----------------------------------------------------------------------------------------------
Please input a one if you are a member of the dental place
Input ant other number if you are not
2
please input the service charge
75.84
please input the test charge
49.78
please input the medicine charge
40.22
The total bill is $165.84
