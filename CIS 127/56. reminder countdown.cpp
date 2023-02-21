//Name:  Jeremy Leung
//Email: jeremy.leung59@myhunter.cuny.edu
//Date: October 16, 2021
//this program count down and remind you

#include <iostream>	// needed to perform C++ I/O

using namespace std;

int main()
{
	int time = 0; //initilize vairable to be used for the time
	string word = ""; //initilize vairable to be used for the word
	
	cout << "Please enter a number: "; //get user input for time
	cin >> time;
	
	cout << "Please enter a number: "; //get user input for word
	cin >> word;
	
	for(time = time; time >= 1; time--) //loop to countdown the timer
	{
		cout << time << ","<< endl; //print the time
	}
	
	cout << "Time for " << word << "!" << endl; //print the word
	
    return 0;
}