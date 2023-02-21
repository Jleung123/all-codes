//Name:  Jeremy Leung
//Email: jeremy.leung59@myhunter.cuny.edu
//Date: October 16, 2021
//this program help you budget for 4 weeks

#include <iostream>	// needed to perform C++ I/O

using namespace std;

int main()
{
	float budget, spending = 0; //initilize vairables for starting and ending budget and montly spending
	int i = 0; //initilize vairable for the loop to be used later
	
	cout << "Enter your monthly budget for food and coffee: "; //get user input for monthly budget
	cin >> budget;
	
	cout << "How much are you spending in a week for coffee: "; //get user input for monthly spending
	cin >> spending;
		
	for(i = 1; i <= 4; i++) //loop to print budget at the end of each week
	{
		budget = budget - spending; // decrement budget after each itteration of the loop
		cout << "Budget left after week " << i << "\t" << budget << endl; //print results
	}
	
    return 0;
}