//Name:  Jeremy Leung
//Email: jeremy.leung59@myhunter.cuny.edu
//Date: October 16, 2021
//this program will print 0101010101 on 5 lines in c++

#include <iostream>	// needed to perform C++ I/O

using namespace std;

int main()
{
	int i, j = 0 //variables to count loop itterations
	
    for (i = 1; i <= 5; i++) //first loop to count the number of lines
	{
		for (j = 1; j <= 5; j++) //inner loop to print "01" 5 times before going to the next line
		{
			cout << "01"; //print "01"
		}
		cout << endl; //pritn new line
	}
	
    return 0;
}