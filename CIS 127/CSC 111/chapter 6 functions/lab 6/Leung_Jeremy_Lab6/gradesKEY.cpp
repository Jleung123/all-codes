// This program takes two numbers (payRate & hours)
// and multiplies them to get grosspay.
// It then calculates net pay by subtracting 15%

// Jeremy Leung

#include <iostream>
#include <iomanip>
using namespace std;

//function declarations
void grades(double, double&);

int main()
{
    //declare variables
	double grade, num, avg = 0;

	//get the input for the number of grades to be inputed
	cout << "Enter the number of grades" << endl;
	cin >> num;

	//for loop to get each grade inputed and add it to avg to keep a sum
	for (int i = 0; i < num; i++)
	{
	    cout << "Enter a numeric grade between 0-100" << endl;
	    cin >> grade;
	    avg += grade;
	}

	// call the function grades
	grades(num, avg);


	// else if else statements to calculate the grade an output the results
	if (avg <= 100 && avg >= 90) cout << "The grade is A" << endl;
	else if (avg <= 89 && avg >= 80) cout << "The grade is B" << endl;
	else if (avg <= 79 && avg >= 70) cout << "The grade is C" << endl;
	else if (avg <= 69 && avg >= 60) cout << "The grade is D" << endl;
    else if (avg <= 00 && avg >= 59) cout << "The grade is F" << endl;
    else cout << " invalid grade" << endl;

	return 0;
}

//function to calculate the average grade
void grades(double num, double &avg)
{
    //calculate the average by dividing the avg by the number of inputs
	avg = avg / num;
}
/*
Enter the number of grades
3
Enter a numeric grade between 0-100
90
Enter a numeric grade between 0-100
80
Enter a numeric grade between 0-100
50
The grade is C
*/
