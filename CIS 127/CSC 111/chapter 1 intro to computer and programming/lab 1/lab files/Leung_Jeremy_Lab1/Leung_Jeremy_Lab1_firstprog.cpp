// This is the first program that just writes out a simple message

// Jeremy Leung

#include <iostream>	// needed to perform C++ I/O
using namespace std;

int main()
{
	cout << "Now is the time for all good men" << endl;
	cout << "To come to the aid of their party" << endl;

	return 0;
}

/*
clang++-7 -pthread -std=c++17 -o main main.cpp
./main
Now is the time for all good men
To come to the aid of their party
*/
