//Name:  Jeremy Leung
//Email: jeremy.leung59@myhunter.cuny.edu
//Date: October 16, 2021
//this program print a trapecoid from a char that the user enters

#include <iostream>	// needed to perform C++ I/O

using namespace std;

int main()
{
	int i,j,n = 0; //initilize vairables to be used for the number in the trapezoid
	char c = ' '; //initilize vairable to be used for the char
	string s = ""; //initilize vairable to keep the string for latter use
	
	cout << "Please enter a number: "; //get user input for n
	cin >> n;
	
	cout << "Please enter a character: "; //get user input for c
	cin >> c;
		
	for(i = 1; i <= n; i++) //loop print the first half trapezoid
	{
		s = s + c; //add the character to the string
		cout << s << endl; //print the character
	}
	
	for(j = 1; j <= n; j++) //loop print the second half trapezoid
	{
		cout << s << endl; //print the characters
	}
	
    return 0;
}