// This program uses a bubble sort to arrange an array of integers in
// ascending order

// Jeremy Leung

#include <iostream>
using namespace std;

// function prototypes
void bubbleSortArray(int[], int);
void displayArray(int[], int);

const int SIZE = 8;

int main()
{
	int values[SIZE] = {23, 0, 45, -3, -78, 1, -1, 9};

	cout << "The values before the bubble sort is performed are:" << endl;
	displayArray(values, SIZE);

	bubbleSortArray(values, SIZE);

	cout << "The values after the bubble sort is performed are:" << endl;
	displayArray(values, SIZE);

	return 0;
}

//******************************************************************
//	displayArray
//
//  task:	  to print the array
//  data in:  the array to be printed, the array size
//  data out: none
//
//******************************************************************

void displayArray(int array[], int elems)	// function heading
{
	// displays the array
	for (int count = 0; count < elems; count++)
		cout << array[count] << "	" << endl;
}

//******************************************************************
//	bubbleSortArray
//
//  task:	  to sort values of an array in ascending order
//  data in:  the array, the array size
//  data out: the sorted array
//
//******************************************************************

void bubbleSortArray(int array[], int elems)
{
	bool swap;
	int temp;
	int bottom = elems - 1;	// bottom indicates the end part of the
							// array where the largest values have
							// settled in order
    cout << "Here is the array being sorted" << endl;
	do
	{
		swap = false;

		for (int count = 0; count < bottom; count++)
		{
			if (array[count] < array[count + 1])  // flip the comparator to < to swap values
                                                  // to descending order from largest to smallest
			{
				// the next three lines do a swap
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				cout << "pass: " << array[count] << " " << endl;

				swap = true; // indicates that a swap occurred
			}
		}
		bottom--;	// bottom is decremented by 1 since each pass through
					// the array adds one more value that is set in order

	} while (swap != false);
	// loop repeats until a pass through the array with
	// no swaps occurs
}
/*
The values before the bubble sort is performed are:
9
2
0
11
5
The values after the bubble sort is performed are:
11
9
5
2
0

-----------------------------------------------------------------------------------

The values before the bubble sort is performed are:
23
0
45
-3
-78
1
-1
9
Here is the array being sorted
pass: 45
pass: 1
pass: -1
pass: 9
pass: 45
pass: 1
pass: -1
pass: 9
pass: 1
pass: 9
pass: 9
pass: 9
The values after the bubble sort is performed are:
45
23
9
1
0
-1
-3
-78
*/
