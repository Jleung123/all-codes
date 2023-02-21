
/*
Author: Jeremy Leung
Course: CSCI-13500
Instructor: Tong Yi
Assignment: Homework 1.7
program will get 3 names from user input and display them on different lines
*/

#include <iostream>

using namespace std;

int main()
{
    //declare variable
    string name1, name2, name3 = "";

    //get user input for name 1
    cout << "Enter the first person's name: ";
    cin >> name1;

    //get user input for name 2
    cout << "Enter the second person's name: ";
    cin >> name2;

    //get user input the name3
    cout << "Enter the the third person's name: ";
    cin >> name3;

    //print out results
    cout << name1 << "\n" << name2 << "\n" << name3 << endl;

    return 0;
}
