// This Program will sort an array of strings in to alphabetical order

// Jeremy Leung

#include <iostream>
#include <algorithm>
using namespace std;

// function to sort the array
void Sort(string[]);

const int NUM_NAMES = 20;

int main()
{
	// declare the array
	string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffin, Jim", "Stamey, Marty",
                                "Rose, Geri", "Taylor, Terri", "Johnson, Jill","Allison, Jeff", "Looney, Joe",
                                "Wolfe, Bill", "James, Jean", "Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
                                "Javens, Renee", "Harrison, Rose", "Setzer, Cathy", "Pike, Gordon", "Holland, Beth"};

    // call function sort; passing the array names
    Sort(names);

	return 0;
}

// function to sort the array in alphabetical order
void Sort(string array[])
{
    // create a temp string to preserve the original values
    string array2[NUM_NAMES];

    // populate the temp array (array2) to the values from array
    for(int i = 0; i < NUM_NAMES; i++) array2[i] = array[i];

    /*
        use the sort function to sort from the beginning of array2 to the end of array2
        this function compares the current character in the element in array2 to the next value in array2
        it compares these characters using the ASCII table
    */
    std::sort(std::begin(array2), std::end(array2));

    // output the results of the sorted array2
    for(int i = 0; i < NUM_NAMES; i++ ) cout << array2[i] << endl;
}
/*
Enter the number of elements for the array: 8
Enter an integer to search for: 0
*/
