/*
This program will calculate the frequency of ages for a given number of people in an array
*/

// Jeremy Leung

#include <iostream>
#include <algorithm>
using namespace std;

// declares a new data type: an integer array of 100 elements
typedef int AgeType[100];

// function to find the frequency of age groups
void countAges(AgeType, int);

int main()
{
    // the array holding the ages and initialize the array to 0 (pos)
	AgeType ages;
	int age, pos = 0;

	// get user input and set the value to the first position in the array
	cout << "Please input an age from one to 100, put -99 to stop" << endl;
	cin >> ages[pos];

	// while loop to determine in the user wants to exit entering values into the array
	while (ages[pos] != -99)
	{
		// increment 1 to the position for the next iteration of the array
		pos ++;

		// accept user input and insert it into the current position of the array
		cout << "Please input an age from one to 100, put -99 to stop" << endl;
		cin >> ages[pos];

	}

	// call function to get the frequency of the ages in the array passing the array and the size
	countAges(ages, pos);

	return 0;
}
/*
function to count the the frequency of each age group
*/
void countAges (AgeType array, int size)
{
    // for loop to swap around the value in the array from smallest to largest in ascending order
    for (int i{0}; i < size - 1; ++i)
	{
	    // static cast int i
		int j{i};

		// inner for loop to count the array at one more then i
		for (int k{i + 1}; k < size; ++k)
		{
		    // if the value in the array at position k is < then value in the array at position j
		    // set the value of j equal to k
			if (array[k] < array[j])
				j = k;
		}

		// swap the values to re order the array to ascending order
		std::swap(array[i], array[j]);
	}

	// for loop to count the age for each recurring number in the array
    for(int i = 0; i < size; i++)
    {
        // local variable for age gets reset to 0 after each iteration of the loop
        int age = 0;

        // inner for loop for compare the first position of the array to all other positions in the array
        for(int j = 0; j < size; j++)
        {
            // if statement to check if there are matching values in the array
            // if true increment age by 1
            if (array[i] == array[j]) age++;
        }
        /*
            if statement to check for repetition values in the array
            if true ignore that position and more on the nest position
            this is the output of the result does not out the same results more then once
        */
        if (array[i] != array[i + 1])

        // output the results
        cout <<"The number of people " << array[i] << " years old is " << age << endl;
    }
}
/*
Please input an age from one to 100, put -99 to stop
5
Please input an age from one to 100, put -99 to stop
10
Please input an age from one to 100, put -99 to stop
100
Please input an age from one to 100, put -99 to stop
20
Please input an age from one to 100, put -99 to stop
5
Please input an age from one to 100, put -99 to stop
8
Please input an age from one to 100, put -99 to stop
20
Please input an age from one to 100, put -99 to stop
5
Please input an age from one to 100, put -99 to stop
9
Please input an age from one to 100, put -99 to stop
17
Please input an age from one to 100, put -99 to stop
-99
The number of people 5 years old is 3
The number of people 8 years old is 1
The number of people 9 years old is 1
The number of people 10 years old is 1
The number of people 17 years old is 1
The number of people 20 years old is 2
The number of people 100 years old is 1
*/
