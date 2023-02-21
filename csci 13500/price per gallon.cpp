
/*
Author: Jeremy Leung
Course: CSCI-13500
Instructor: Tong Yi
Assignment: Homework 2.10
program will display the cost per gallon per 100 miles and how far the car can go
*/

#include <iostream>

using namespace std;

int main()
{
    //declare variable
    double mpg, tank, price, miles= 0;

    //get user input for the ammout of gas in the tank
    cout << "Enter the number of gallons of gas in the tank: ";
    cin >> tank;

    //get user input for the fuel efficiency
    cout << "Enter the fuel efficiency in miles per gallon: ";
    cin >> mpg;

    //get user input for the price per gallon
    cout << "Enter the price of gas per gallon: ";
    cin >> price;

    //print out results
    cout << "The cost per 100 miles = $" << (price * 100) / mpg << " and the car can go " << mpg * tank << " per tank of gas." << endl;

    return 0;
}
