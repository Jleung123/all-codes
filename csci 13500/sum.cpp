#include <iostream>
/*
Author: Jeremy Leung
Course: CSCI-13500
Instructor: Tong Yi
Assignment: sum, project A

This program will add the sum of ints from a txt file
*/
using namespace std;

int main()
{
    int num, total = 0; //declare variables

    while(cin >> num) // While the reading operation is a success
    {
        total = total + num; //keep a running count of the num
    }

    cout << total << endl; //print out the total to the screen

    return 0;
}

