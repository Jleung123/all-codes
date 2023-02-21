// This program will read in a group of test scores (positive integers from 1 to 100)
// from the keyboard and then calculate and output the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

// Jeremy Leung

#include <iostream>
#include <fstream>
using namespace std;

typedef int GradeType[100];		// declares a new data type:
								// an integer array of 100 elements

float findAverage(const GradeType, int);	// finds average of all grades
int  findHighest(const GradeType, int);		// finds highest of all grades
int  findLowest(const GradeType, int);		// finds lowest of all grades

int main()
{
	GradeType grades;	// the array holding the grades.
	int numberOfGrades;	// the number of grades read.
	int pos = 0;		// index to the array.
	float avgOfGrades;	// contains the average of the grades.
	ifstream dataIn;	// defines an input stream for a data file

	dataIn.open("gradfile.txt"); // This opens the file.

	while (dataIn)
	{
		// Fill in the code to read the grades
		dataIn >> grades[pos];
		pos ++;
	}

	numberOfGrades = pos - 1;	// Fill blank with appropriate identifier

	// call to the function to find average
	avgOfGrades = findAverage(grades, numberOfGrades);
	cout << endl << "The average of all the grades is " << avgOfGrades << endl;

	// Fill in the call to the function that calculates highest grade
	cout << endl << "The highest grade is " << findHighest(grades, numberOfGrades) << endl;

	// Fill in the call to the function that calculates lowest grade
	// Fill in code to write the lowest to the screen
	cout << endl << "The lowest grade is " << findLowest(grades, numberOfGrades) << endl;

	return 0;
}

//********************************************************************************
// findAverage
//
// task:	      This function receives an array of integers and its size.
//	              It finds and returns the average of the numbers in the array
// data in:	      array of floating point numbers
// data returned: average of the numbers in the array
//
//********************************************************************************

float findAverage(const GradeType array, int size)
{
	float sum = 0; // holds the sum of all the numbers

	for (int pos = 0; pos < size; pos++)
		sum = sum + array[pos];

	return (sum / size); // returns the average
}

//****************************************************************************
// findHighest
//
// task:	      This function receives an array of integers and its size.
//	              It finds and returns the highest value of the numbers in
//                the array
// data in:	      array of floating point numbers
// data returned: highest value of the numbers in the array
//
//****************************************************************************

int	findHighest(const GradeType array, int size)
{
	// Fill in the code for this function
	// set the local variable equal to the first value in the array
	int highest = array[0];

	for (int pos = 0; pos < size; pos++)
    {
        if (highest < array[pos])
    }

	return highest;

}

//****************************************************************************
// findLowest
//
// task:	      This function receives an array of integers and its size.
//	              It finds and returns the lowest value of the numbers in
//                the array
// data in:	      array of floating point numbers
// data returned: lowest value of the numbers in the array
//
//****************************************************************************

int	findLowest(const GradeType array, int size)
{
	// Fill in the code for this function
	// set the local variable equal to the first value in the array
	int lowest = array[0];

	for (int pos = 0; pos < size; pos++)
    {
        if (lowest > array[pos])
        lowest = array[pos];
        //cout << lowest;
    }

	return lowest;
}
/*

The average of all the grades is 58.2

The highest grade is 90

The highest grade is 21
*/
