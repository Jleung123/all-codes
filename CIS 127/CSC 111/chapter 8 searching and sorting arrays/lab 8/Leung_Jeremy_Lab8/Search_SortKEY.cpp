// This Program will sort an array into ascending order and search the array fro the user selected value
// and out the mean, the elements in the array before and after sorting, the value being searched for, and location
// of that value in the sorted array if found, else output the appropriate response

// Jeremy Leung

#include <iostream>
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

	// declare the array
	int array[SIZE];

	// ask and receive user input for the size of the array
	cout << "Enter the number of elements for the array: ";
	cin >> arraysize;

	// for loop to fill in the values into the array
	for( int i = 0; i < arraysize; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> array[i];
    }

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

    // for loop to get the mean value of the array and output the results
	for(int i = 0; i < numElems; i++)
    {
        mean += array[i];
    }
    cout << "The mean of all of the values in the array is: " << mean / numElems << endl;

    // output the size of the array
    cout << "The size of the array is: " << numElems << endl;

    // for loop to output the elements in the array before being sorted
    cout << "Here is the array before being sorted: ";
    for(int i = 0; i < numElems; i++)
    {
        cout << array[i] << " ";
    }

    // call function to sort the array
    Sort(array, numElems);
    // for loop to output the elements in the array after being sorted
    cout << "\nHere is the array after being sorted: ";
    for(int i = 0; i < numElems; i++)
    {
        cout << array[i] << " ";
    }

    //output the value from user to search for in the array
    cout << "\nThe value being searched for in the array: " << value << endl;

    // set variable found = to the returning value from function that searches for the value on the array
    found = binary(array, numElems, value);

    // output the position if value is found, else output value not in the list
    if (found == -1)
		cout << "The value " << value << " is not in the list" << endl;
	else
		cout << "The value " << value << " is in position number "
		     << found + 1 << " of the list" << endl;
    return 0;
}
/*
Enter the number of elements for the array: 8
Enter value 1: 23
Enter value 2: 0
Enter value 3: 45
Enter value 4: -3
Enter value 5: -78
Enter value 6: 1
Enter value 7: -1
Enter value 8: 9
Enter an integer to search for: 0
The mean of all of the values in the array is: -0.5
The size of the array is: 8
Here is the array before being sorted: 23 0 45 -3 -78 1 -1 9
Here is the array after being sorted: -78 -3 -1 0 1 9 23 45
The value being searched for in the array: 0
The value 0 is in position number 4 of the list
*/
