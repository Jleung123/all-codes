// This Program will sort an array into ascending order and search the array fro the user selected value
// and out the mean, the elements in the array before and after sorting, the value being searched for, and location
// of that value in the sorted array if found, else output the appropriate response

// Jeremy Leung

#include <iostream>
#include <fstream>
using namespace std;

// function to sort the array
void Sort(int[], int);

// function to search the array
int binary(int[], int, int);

// function to get the mean, size of the array, the sorted array, value searched and location of value
int result(int[], int, int);

// declare an variable size for the max size of the array
const int SIZE = 50;

int main()
{
    // declare variables
	int arraysize, found, value;

	// define the input steam
	ifstream dataIn;

	// declare the array
	int array[SIZE];

	// ask and receive user input for the size of the array
	cout << "Enter the number of elements for the array: ";
	cin >> arraysize;

	// open file
	dataIn.open("inFile.dat");

	// loop loop to fill in the values into the array from the file
	while (dataIn)
	{
		for (int i = 0; i < arraysize; i++)
		{
            dataIn >> array[i];
		}
	}

	// close the input file
	dataIn.close();

    // ask and receive user input for the value being searched
	cout << "Enter an integer to search for: ";
	cin >> value;

	// call function passing in the array, the user define array size, and the value being searched for
	found = result(array, arraysize, value);

	return 0;
}

// function to sort the array
void Sort(int array[], int elems)
{
	int seek;		// array position currently being put in order
	int minCount;	// location of smallest value found
	int minValue;	// holds the smallest value found

	for (seek = 0; seek < (elems - 1); seek++)	// outer loop performs the swap
												// and then increments seek
	{
		minCount = seek;
		minValue = array[seek];

		for (int index = seek + 1; index < elems; index++)
		{
			// inner loop searches through array
			// starting at array[seek] searching
			// for the smallest value. When the
			// value is found, the subscript is
			// stored in minCount. The value is
			// stored in minValue.

			if (array[index] < minValue)    // flip the comparator to < to swap values
                                            // to descending order from largest to smallest
			{
				minValue = array[index];
				minCount = index;
			}
		}

		// the following two statements exchange the value of the
		// element currently needing the smallest value found in the
		// pass(indicated by seek) with the smallest value found
		// (located in minValue)

		array[minCount] = array[seek];
		array[seek] = minValue;
	}
}

// function to search the array
int binary(int array[], int numElems, int value)
{
	int first = 0;				// First element of list
	int last = numElems - 1;	// last element of the list
	int middle;					// variable containing the current
								// middle value of the list

	while (first <= last)
	{
		middle = first + (last - first) / 2;

		if (array[middle] == value)
            return middle; // if value is in the middle, we are done

		else if (array[middle] > value)
			last = middle - 1;	// toss out the second remaining half of

		else
			first = middle + 1;	// toss out the first remaining half of
								// the array and search the second
	}

	return -1;	// indicates that value is not in the array
}

// function to get the mean, size of the array, the sorted array, value searched and location of value
int result(int array[], int numElems, int value)
{
    // declare variable double mean for the mean value of the elements in the array, and int found for the value searched
    double mean = 0; int found;

    // define the output steam
	ofstream dataOut;

	//open the output file
	dataOut.open("outFile.dat");

    // output the size of the array
    dataOut << "The size of the array is: " << numElems << endl;

    //output the value from user to search for in the array
    dataOut << "The value being searched for in the array: " << value << ", ";

    // call function to sort the array
    Sort(array, numElems);

    // set variable found = to the returning value from function that searches for the value on the array
    found = binary(array, numElems, value);

    // output the position if value is found, else output value not in the list
    if (found == -1)
		dataOut << "The value " << value << " is not in the list" << endl;
	else
		dataOut << "The value " << value << " is in position number "
                << found + 1 << " of the list" << endl;

    // call function to sort the array
    Sort(array, numElems);

    // for loop to output the elements in the array after being sorted
    for(int i = 0; i < numElems; i++)
    {
        dataOut << array[i] << endl;
    }

    // close the output file
	dataOut.close();

    return 0;
}
/*
Enter the number of elements for the array: 8
Enter an integer to search for: 0
*/
