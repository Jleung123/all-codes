//this program will calculate the average score of 5 judges using functions

// Jeremy Leung

#include <iostream>
#include <iomanip>
using namespace std;

//function declarations
double patient(double, double);
double patient(double, double, double, double);

int main()
{
    //declare variables
	char patientTpye;
	double days, rate, medCharge, serCharge, total;

	cout << setprecision(2) << fixed;


	//display instructions for the user to input data
	cout << "This program will compute patient hospital charges.\n"
         << "What was the patient type?\n"
         << "In-patient or Out-patient (I or O) ";
    cin >> patientTpye;

    //while loop as input validation to make sure the user enters a valid input (I or O)
	while (!(patientTpye == 'I' || patientTpye == 'i' || patientTpye == 'O' || patientTpye == 'o'))
    {
        cout << "Please enter I or O: ";
        cin >> patientTpye;
    }

	//an if statement to determine which function to call
	if (patientTpye == 'I' || patientTpye == 'i') {total = patient(days, rate, medCharge, serCharge);}
	else if (patientTpye == 'O' || patientTpye == 'o') total = patient(medCharge, serCharge);
	else cout << "Invalid entry!!!" << endl;

	//output the results
	cout << "The total charges are $" << total << endl;

	return 0;
}

//function to the total for In-patient
double patient(double days, double rate, double medCharge, double serCharge)
{
    //get the input for the number of days stayed in the hospital
	cout << "Number of days in the hospital: ";
	cin >> days;

	//while loop as input validation to make sure the user cannot enter a negative value
	while (days < 0)
    {
        cout << "Days must be zero or more. Please re-enter: ";
        cin >> days;
    }

    //get the input for the daily room rate
	cout << "Daily room rate: $";
	cin >> rate;

	//while loop as input validation to make sure the user cannot enter a negative value
	while (rate < 0)
    {
        cout << "Room rate must be zero or more. Please re-enter: ";
        cin >> rate;
    }

    //get the input for medicine charges
	cout << "Medication charges: $";
	cin >> medCharge;

	//while loop as input validation to make sure the user cannot enter a negative value
	while (medCharge < 0)
    {
        cout << "Medication charges must be zero or more. Please re-enter: $";
        cin >> medCharge;
    }

    //get the input for medicine charges
	cout << "Lab fees and other service charges:: $";
	cin >> serCharge;

	//while loop as input validation to make sure the user cannot enter a negative value
	while (serCharge < 0)
    {
        cout << "Lab fees and other service charges must be zero or more. Please re-enter: $";
        cin >> serCharge;
    }

    //calculate and return the total
    return (days * rate) + medCharge + serCharge;
}

//function to the total for Out-patient
double patient(double medCharge, double serCharge)
{

    //get the input for medicine charges
	cout << "Medication charges: $";
	cin >> medCharge;

	//while loop as input validation to make sure the user cannot enter a negative value
	while (medCharge < 0)
    {
        cout << "Medication charges must be zero or more. Please re-enter: $";
        cin >> medCharge;
    }

    //get the input for medicine charges
	cout << "Lab fees and other service charges:: $";
	cin >> serCharge;

	//while loop as input validation to make sure the user cannot enter a negative value
	while (serCharge < 0)
    {
        cout << "Lab fees and other service charges must be zero or more. Please re-enter: $";
        cin >> serCharge;
    }

    //calculate and return the total
    return medCharge + serCharge;
}
/*
This program will compute patient hospital charges.
What was the patient type?
In-patient or Out-patient (I or O) 0
Please enter I or O: o
Medication charges: $-1200
Medication charges must be zero or more. Please re-enter: $1200
Lab fees and other service charges:: $-780
Lab fees and other service charges must be zero or more. Please re-enter: $780
The total charges are $1980.00
--------------------------------------------------------------------------------------------------
This program will compute patient hospital charges.
What was the patient type?
In-patient or Out-patient (I or O) I
Number of days in the hospital: 4
Daily room rate: $-130
Room rate must be zero or more. Please re-enter: 130
Medication charges: $1200
Lab fees and other service charges:: $780
The total charges are $2500.00
*/
