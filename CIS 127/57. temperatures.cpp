//Name:  Jeremy Leung
//Email: jeremy.leung59@myhunter.cuny.edu
//Date: October 16, 2021
//this program will tell you the tempeatures

#include <iostream>	// needed to perform C++ I/O

using namespace std;

int main()
{
	int temp = 0; //initilize vairable for the temperature

	cout << "Enter the temperature: "; //get user input for temperature
	cin >> temp;
	
	if(temp <= 32)//if-else-if statements to check for each condition
	{
		cout << "It's freezing!" << endl; //print It's frezzing
	}
	else if(temp < 68 && temp > 32)
	{
		cout << "It's cold!" << endl; //print It's cold
	}
	else if (temp >= 68 && temp <= 73)
	{
		cout << "It's warm!" << endl; //print It's warm
	}
	else if(temp > 73)
	{
		cout << "It's Hot!" << endl; //print It's hot
	}
	
    return 0;
}