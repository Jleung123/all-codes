//This Program will check if a 2D array with 3 rows and 3 columns is a magic square or not

// Jeremy Leung

#include <iostream>
#include <fstream>
using namespace std;

// declare constant variables
const int ROWS = 3;
const int COLS = 3;
const int MIN = 1;
const int MAX = 9;

// declare functions
void showResult(int[][COLS]);
void showArray(int[][COLS]);
bool isMagicSquare(int[][COLS]);
bool checkRange(int[][COLS]);
bool checkUnique(int[][COLS]);
bool checkRowSum(int[][COLS]);
bool checkColSum(int[][COLS]);
bool checkDiagSum(int[][COLS]);

int main()
{
    // create and define a magic square array
    int magicArray[ROWS][COLS] = {{4, 9, 2},{3, 5, 7},{8, 1, 6}};

    // Create a normal two-dimensional array.
    int normalArray[ROWS][COLS] = {{10, 2, 3},{4, 15, 6},{7, 8, -8}};

    //call function to determine if the normalArray is a magic square or not
    showResult(normalArray);

    // call function to determine if the magicArray is a magic square or not
    showResult(magicArray);

	return 0;
}

// function to calls isMagicSquare; then outputs the corresponding response
void showResult(int array[ROWS][COLS])
{
    // calls function showArray to output the array in a box pattern
    showArray(array);

    // calls isMagicSquare function which returns true or false and outputs if the array is a magic square or not
    if (isMagicSquare(array)) cout << "This is a Lo Shu magic square." << endl;
    else cout << "This is not a Lo Shu magic square." << endl;
}

// function to output the array in a grid
void showArray(int array[ROWS][COLS])
{
    // output table header
    cout << "--------------" << endl;

    // for loop to count the rows
    for(int i = 0; i < ROWS; i++)
    {
        // output grid marker
        cout << "|";

        // inner for loop to count each position in the row
        for(int j = 0; j < ROWS; j++)
        {
            //output the value in the array at that position
            cout << " " << array[i][j] << " |";
        }

        // output table row
        cout << endl << "--------------" << endl;
    }
}

// function to call checkRange, checkRowSum, checkColSum, checkDiagSum, checkUnique
// if all of those functions return true; then the array is a magic square, else it is not a magic square
bool isMagicSquare(int array[ROWS][COLS])
{
    // calling all these functions to; if true return true, else return false
    if (checkRange(array) && checkRowSum(array) &&  checkColSum(array)
                          &&  checkDiagSum(array) &&  checkUnique(array)) return true;
    else return false;
}

// function to check the range of each number in the array
bool checkRange(int array[ROWS][COLS])
{
    // for loop to count the rows
    for(int i = 0; i < ROWS; i++)
    {

        // inner for loop to count each position in the row
        for(int j = 0; j < ROWS; j++)
        {
            // checks if each value in in the array at the current position is out of the bounds using
            // the MIN and MAX values
            // if this condition is met then return false
            if (array[i][j] < MIN || array[i][j] > MAX) return false;
        }
    }

    // else return true
    return true;
}

// function to check if all the numbers in the array is unique
bool checkUnique(int array[ROWS][COLS])
{
    // for loop to count the rows
    for (int i = 0; i < COLS; i++)
    {
        // inner for loop to count each position in the row
        for (int j = 0; j < ROWS; j++)
        {
            // nested loop to check the columns in the array
            for (int k = 0; k < COLS; k++)
            {
                // inner nested loop to read values in each rows
                for (int l = 0; l < ROWS; l++)
                {
                    // if statement to skip the the current position for the algorithm
                    if (array[k][l] == array[i][j]) l++;

                    // if a match is found return false
                    if (array[k][l] == array[i][j]) return false;
                }
            }
        }
    }

    // else return true
    return true;
}

// function to count the the sum of each row
bool checkRowSum(int array[ROWS][COLS])
{
    // declare variables to count the sum for each row
    int row1 = 0, row2 = 0, row3 = 0;

    // for loop to count the sum of all the numbers in row 1 of the array
    for(int i = 0; i < COLS; i++)
    {
        // keep a running count of row 1
        row1 += array[0][i];
    }

    // for loop to count the sum of all the numbers in row 2 of the array
    for(int i = 0; i < COLS; i++)
    {
        // keep a running count of row 2
        row2 += array[1][i];
    }

    // for loop to count the sum of all the numbers in row 3 of the array
    for(int i = 0; i < COLS; i++)
    {
        // keep a running count of row 2
        row3 += array[2][i];
    }

    // if all the rows equal 15 then return true else return false
    if (row1 == 15 && row2 == 15 && row3 == 15) return true;
    else return false;
}

// function to check the the sum of each column
bool checkColSum(int array[ROWS][COLS])
{
    // declare variables to count the sum for each column
    int col1 = 0, col2 = 0, col3 = 0;

    // for loop to count the sum of all the numbers in column 1 of the array
    for(int i = 0; i < COLS; i++)
    {
        // keep a running count of column 1
        col1 += array[i][0];
    }

    // for loop to count the sum of all the numbers in column 2 of the array
    for(int i = 0; i < COLS; i++)
    {
        // keep a running count of column 2
        col2 += array[i][1];
    }

    // for loop to count the sum of all the numbers in column 3 of the array
    for(int i = 0; i < COLS; i++)
    {
        // keep a running count of column 3
        col3 += array[i][2];
    }

    // if all the columns equal 15 then return true else return false
    if (col1 == 15 && col2 == 15 && col3 == 15) return true;
    else return false;
}

// function to check the sum of each diagonal
bool checkDiagSum(int array[ROWS][COLS])
{
    // declare variables to count the sum for each diagonal
    int dia1 = 0, dia2 = 0, j = 0;

    // for loop to count the sum of all the numbers diagonally from top left to bottom right of the array
    for(int i = 0; i < COLS; i++)
    {
        // keep a running count of diagonal 1
        dia1 += array[i][i];

    }

    // for loop to count the sum of all the numbers diagonally from bottom left to top right of the array
    for(int i = 2; i >= 0; i--)
    {
        // keep a running count of diagonal 2
        dia2 += array[i][j];
        j++;
    }

    // if both diagonals equal 15 then return true else return false
    if (dia1 == 15 && dia2 == 15) return true;
    else return false;
}
/*
--------------
| 10 | 2 | 3 |
--------------
| 4 | 15 | 6 |
--------------
| 7 | 8 | -8 |
--------------
This is not a Lo Shu magic square.
--------------
| 4 | 9 | 2 |
--------------
| 3 | 5 | 7 |
--------------
| 8 | 1 | 6 |
--------------
This is a Lo Shu magic square.
*/
