/*
this program will read a array of char and output the frequency
*/

// Jeremy Leung

#include <iostream>
#include <iomanip>
using namespace std;

// declares a new data type: an integer array of 50 elements
typedef char GradeType[50];

// functions to input the grades into the array and to calculate the frequency
void getGrade(GradeType, int);
void gradeFrequency(GradeType, int);

int main()
{
    // declare array grade and int variable size from use input to get the size of the array
	GradeType grade;
	int size;

	// get user input to enter the size of the array
	cout << "Please input the number of grades to be read in. (1-50)" << endl;
	cin >> size;

	// call to function to input chars into the array passing the array and size
	getGrade(grade, size);

	// call to function to get the frequency passing the array and size
	gradeFrequency(grade, size);

	return 0;
}
/*
function input the char into the array
*/
void getGrade(GradeType array, int size)
{
    // display instructions for user to enter grades in upper case
    cout << "All grades must be upper case A B C D or F" << endl;

    //for loop to insert each user into in the to procceding cell in the array
    for (int i = 0; i < size; i++)
    {
        // accept user input and insert it into the current position in the array
        cout << "input a grade" << endl;
        cin >> array[i];

        // while loop as input validation to make sure the user enters in only upper case
        while (!(array[i] == 'A' || array[i] == 'B' ||array[i] == 'C' ||array[i] == 'D' ||array[i] == 'F'))
        {
            // accept user input and re insert it into the current position in the array
            cout << "grade entered incorrectly please re enter a grade" << endl;
            cin >> array[i];
        }
    }
}
/*
function to calculate the frequency of the letters
*/
void gradeFrequency(GradeType array, int size)
{
    // declare variables to keep a count of each letter
    int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;

    //for loop to check what the letter at each position of the array is
	for(int i = 0; i < size; i++)
    {
        // switch statement to compare each each position in the array to accept inputs
        switch (array[i])
        {
            // keep a running count of each grade if the character in the array is meet
            case 'A': aCount++;
            break;
            case 'B': bCount++;
            break;
            case 'C': cCount++;
            break;
            case 'D': dCount++;
            break;
            case 'F': fCount++;
            break;
        }
    }

    // output the results
    cout <<"\nNumber of A = " << aCount << endl;
    cout <<"Number of B = " << bCount << endl;
    cout <<"Number of C = " << cCount << endl;
    cout <<"Number of D = " << dCount << endl;
    cout <<"Number of F = " << fCount << endl;
}
/*
Please input the number of grades to be read in. (1-50)
6
All grades must be upper case A B C D or F
input a grade
A
input a grade
C
input a grade
a
grade entered incorrectly please re enter a grade
A
input a grade
b
grade entered incorrectly please re enter a grade
B
input a grade
B
input a grade
D

Number of A = 2
Number of B = 2
Number of C = 1
Number of D = 1
Number of F = 0
*/
