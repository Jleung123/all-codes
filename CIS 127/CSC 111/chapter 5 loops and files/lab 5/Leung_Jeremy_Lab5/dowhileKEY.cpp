// This program displays a hot beverage menu and prompts the user to
// make a selection. A switch statement determines which item the user
// has chosen. A do-while loop repeats until the user selects item E
// from the menu.

// Jeremy Leung

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Fill in the code to define an integer variable called number,
	int number;
	// a floating point variable called cost,
	float cost;
	// and a character variable called beverage
	char beverage;

	bool validBeverage;

	cout << fixed << showpoint << setprecision(2);

	do
	{
		cout << endl;
		cout << "Hot Beverage Menu" << endl;
		cout << "A: Coffee	$1.00" << endl;
		cout << "B: Tea	\t$0.75" << endl;
		cout << "C: Hot Chocolate$1.25" << endl;
		cout << "D: Cappuccino	$2.50" << endl;

		cout << "Enter the beverage A,B,C, or D you desire" << endl;
		cout << "Enter E to exit the program" << endl;

		// Fill in the code to read in beverage
		cin >> beverage;

		switch (beverage)
		{
			case 'a':
			case 'A':
			case 'b':
			case 'B':
			case 'c':
			case 'C':
			case 'd':
			case 'D': validBeverage = true;
				break;
			default: validBeverage = false;
		}

		if (validBeverage)
		{
			cout << "How many cups would you like?" << endl;

			// Fill in the code to read in number
			cin >> number;
		}

		// Fill in the code to begin a switch statement
		// that is controlled by beverage
		switch (beverage)
		{
			case 'a':
			case 'A': cost = number * 1.0;
				cout << "The total cost is $ " << cost << endl;
				break;
				// Fill in the code to give the case for hot chocolate ($1.25 a cup)
            case 'b':
			case 'B': cost = number * 1.25;
				cout << "The total cost is $ " << cost << endl;
				break;
				// Fill in the code to give the case for tea ( $0.75 a cup)
            case 'c':
			case 'C': cost = number * 0.75;
				cout << "The total cost is $ " << cost << endl;
				break;
				// Fill in the code to give the case for cappuccino ($2.50 a cup)
            case 'd':
			case 'D': cost = number * 2.50;
				cout << "The total cost is $ " << cost << endl;
				break;
			case 'e':
			case 'E': cout << "Please come again" << endl;
				break;
			default:
			    cout <<	// Fill in the code to write a message
						// indicating an invalid selection.
						"invalid selection" << endl;
				 cout << " Try again please" << endl;
		}

		// Fill in the code to finish the do-while statement with the
		// condition that beverage does not equal E or e.
	}while (!(beverage == 'e' || beverage == 'E'));

		// Fill in the appropriate return statement
    return 0;
}
/*
Hot Beverage Menu
A: Coffee       $1.00
B: Tea          $0.75
C: Hot Chocolate$1.25
D: Cappuccino   $2.50
Enter the beverage A,B,C, or D you desire
Enter E to exit the program
a
How many cups would you like?
5
The total cost is $ 5.00

Hot Beverage Menu
A: Coffee       $1.00
B: Tea          $0.75
C: Hot Chocolate$1.25
D: Cappuccino   $2.50
Enter the beverage A,B,C, or D you desire
Enter E to exit the program
e
Please come again
----------------------------------------------------------------------------------

Hot Beverage Menu
A: Coffee       $1.00
B: Tea          $0.75
C: Hot Chocolate$1.25
D: Cappuccino   $2.50
Enter the beverage A,B,C, or D you desire
Enter E to exit the program
q
invalid selection
 Try again please

Hot Beverage Menu
A: Coffee       $1.00
B: Tea          $0.75
C: Hot Chocolate$1.25
D: Cappuccino   $2.50
Enter the beverage A,B,C, or D you desire
Enter E to exit the program
a
How many cups would you like?
9
The total cost is $ 9.00

Hot Beverage Menu
A: Coffee       $1.00
B: Tea          $0.75
C: Hot Chocolate$1.25
D: Cappuccino   $2.50
Enter the beverage A,B,C, or D you desire
Enter E to exit the program
E
Please come again

the program has a input validation to check if the user enters anything that is not accepted
------------------------------------------------------------------------------------

the program still works because if statement checks the boolean value for true or false
if(true) is the same thing as if(condition = true) likewise if(!true) is the same thing as
if (condition = false)
*/
