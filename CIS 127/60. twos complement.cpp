//Name:  Jeremy Leung
//Email: jeremy.leung59@myhunter.cuny.edu
//Date: October 16, 2021
//this program will print the binary of a number between -31 and 31

#include <iostream>	// needed to perform C++ I/O

using namespace std;

int main()
{
	int n, x = 0; //initilize vairables for a n(from user) and x for calculating the next binary digit
	int b = 16; //initilize a variable b for the while loop
	
	cout << "Enter a number:  "; //get user input for number (n)
	cin >> n;
	
	if(n < 0) //if-else-if condition to check if the user input is negative of positive
	{
		cout << "1"; //if negative print 1
		x = 32 + n; //set x to 32 + n(user input)
	}
	else if(n >= 0)
	{
		cout << "0"; //if positive print 0
		x = n; //set x to 32
	}
	
	while (b > 0.2) //while loop to print the rest of the values for x
	{
		if(x >= b) //if the current value of x is less then or equal to b print a 1
		{
			cout << "1";
		}
		else //else print a 0
		{
			cout << "0";
		}
		
		x = x % b; //set x to a new values of the the current value of x to x/b
		b = b / 2; //set the current value of b to b/2
	}
	
    return 0;
}