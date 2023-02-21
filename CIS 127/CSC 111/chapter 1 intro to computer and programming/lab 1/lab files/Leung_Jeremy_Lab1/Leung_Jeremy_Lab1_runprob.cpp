// This program will take a number and divide it by 2.

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
	float number;
	int divider;

	divider = 2;

	cout << "Hi there" << endl;
	cout << "Please input a number and then hit return" << endl;
	cin >> number;

	number = number / divider;

	cout << "Half of your number is " << number << endl;

	return 0;
}
/*
clang++-7 -pthread -std=c++17 -o main main.cpp
./main
Hi there
Please input a number and then hit return
9
Half of your number is 4.5
*/