// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

	do
	{
		cout << "Please enter a letter" << endl;
		cin >> letter;

		cout << "The letter you entered is " << letter << endl;

		cout << "Enter the letter 'x' to exit or any other letter to continue"<< endl;
	}
	while (letter != 'x');

	return 0;
}
/*
Please enter a letter
a
The letter you entered is a
Please enter a letter
b
The letter you entered is b
Please enter a letter
w

this program does not let you know how to exit out of the loop, it just keeps asking
for a letter until the user can guess which letter to enter to exit the loop
    ----------------------------------------------------------------------
Please enter a letter
a
The letter you entered is a
Enter the letter 'x' to exit or any other letter to continue
Please enter a letter
b
The letter you entered is b
Enter the letter 'x' to exit or any other letter to continue
Please enter a letter
x
The letter you entered is x
Enter the letter 'x' to exit or any other letter to continue

    ----------------------------------------------------------------------

Please enter a letter
a
The letter you entered is a
Enter the letter 'x' to exit or any other letter to continue
Please enter a letter
c
The letter you entered is c
Enter the letter 'x' to exit or any other letter to continue
Please enter a letter
e
The letter you entered is e
Enter the letter 'x' to exit or any other letter to continue
Please enter a letter
x
The letter you entered is x
Enter the letter 'x' to exit or any other letter to continue

changing the while loop to a do-while loop does not effect the program
*/
