// This program demonstrates a compile error.

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
	int number;
	float total;

	cout << "Today is a great day for Lab";
	cout << endl << "Let's start off by typing a number of your choice" << endl;
	cin >> number;

	total = number * 2;
	cout << total << " is twice the number you typed" << endl;

	return 0;
}
/*
clang++-7 -pthread -std=c++17 -o main main.cpp
./main
Today is a great day for Lab
Let's start off by typing a number of your choice
5
10 is twice the number you typed
*/