// This program demonstrates a Binary Search

// Jeremy Leung

#include <iostream>
using namespace std;

int binarySearch(int[], int, int);	// function prototype
const int SIZE = 16;

int main()
{
	int found, value, temp;

	int array[] = { 34, 19, 19, 18, 17, 13, 12, 12, 12, 11, 9, 5, 3, 2, 2, 0 };
	// array to be searched

	// method to swap values in the array in ascending order
    for (int i = 0; i < SIZE; i++)
    {
        for(int j = i + 1; j < SIZE; j++)
        {
            if (array[i] > array[j])
            {
                swap(array[i], array[j]);
            }
        }
    }

	cout << "Enter an integer to search for:" << endl;
	cin >> value;

	found = binarySearch(array, SIZE, value);
	// function call to perform the binary search
	// on array looking for an occurrence of value

	if (found == -1)
		cout << "The value " << value << " is not in the list" << endl;
	else
		cout << "The value " << value << " is in position number "
		     << found + 1 << " of the list" << endl;

	return 0;
}

//*******************************************************************
//	binarySearch
//
//  task:	       This searches an array for a particular value
//  data in:	   List of values in an orderd array, the number of
//	               elements in the array, and the value searched for
//	               in the array
//  data returned: Position in the array of the value or -1 if value
//	               not found
//
//*******************************************************************

int binarySearch(int array[], int numElems, int value)	// function heading
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
/*
yes the right side of the assignment statement is an integer. the integer middle is assigned as follows
i.e. example if user enters 19:
middle = 0 + (15 - 0)) / 2; middle = 7
    and it runs through the whole loop checking the if statements
    if array[7] (12) < 19; last =  7 - 1; last = 6
then it recalculates middle: middle = 0 + (6 - 0) / 2; middle = 3
    the it goes through the while loop again checking against the if statements
    if array[3] (18) < 19; last =  3 - 1; last = 2
calculates middle one more time: middle = 0 + (2 - 0) / 2; middle = 1
then it testes the if statements one more time
    if array[1] (19) = 19; return 19
the calculation is the same if the user enters 12 for the value
the reason why this calculation is possible is because when you are searching through an array
the position of the array is referenced by an integer
--------------------------------------------------------------------------------------
Enter an integer to search for:
19
The value 19 is in position number 2 of the list

Enter an integer to search for:
12
The value 12 is in position number 8 of the list
--------------------------------------------------------------------------------------
Enter an integer to search for:
19
The value 19 is in position number 14 of the list

Enter an integer to search for:
12
The value 12 is in position number 8 of the list
*/
