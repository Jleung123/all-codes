/*
Author: Jeremy Leung
Course: CSCI-13500
Instructor: Yasmeen Hasan
Assignment: numbers, Lab5 G
This program will send two numbers to a function to check for the largest twin prim in that range
by testing if n + 2 or n - 2 or both conditions are true
*/

#include <iostream>

using namespace std;
//function to check if c is a prime number
bool isPrime(int n)
{
    //declare variables
    bool test = true;

    //if n = any of these numbers then its n is not a prime
    if (n == 0 || n == 1 || n < 0 || n == 4)
    {
        test = false;
    }
    //check is n is divisible by n and 1 up to the value of n
    for (int i = 2; i < n / 2; ++i)
    {
        if (n % i == 0)
        {
            test = false;
        }
    }

    //return the value of test to the calling function
    return test;
}
//function find the next prime after n
int largestTwinPrime(int a, int b)
{
    //for loop to go b to a searching through the range backwards
    //and returning the first twin prime it finds
    for(b; b >= a; b--)
    {
        if((isPrime(b) && isPrime(b - 2)) || (isPrime(b) && isPrime(b + 2)))
        {
            return b;
        }
    }

    //return the next twin prime to the calling function
    return -1;
}
int main()
{
    //declare variables
    int num1 = 0, num2 = 0;

    //get user input for a range
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    //output the next twin prime after n
    cout << largestTwinPrime(num1, num2) << endl;

    return 0;
}
