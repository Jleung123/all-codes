/*
    This program will conduct a survey of the preferred drink from as
    many input as the user makes until the input is -1
*/

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
    //declare variables
    int coffeeTotal = 0, teaTotal = 0, cokeTotal = 0, orangeJuiceTotal = 0, choice = 0, counter = 1;

    //display instructions and a menu for the user
    cout << "Please select a drink from the following menu by entering (1-4)" << endl << endl;
    cout << "1.Coffee\t2.Tea\t\t3.Coke\t\t4.Orange Juice" << endl;

    //do-while loop to insure the program runs at least once until user inputs -1
    do
    {
        //output statement to get the user input for the preferred drink
        cout << "Please input the favorite beverage of person #" << counter
        << ". choose 1. 2. 3. or 4 from\nthe above or -1 to exit the program." << endl;
        cin >> choice;

        //newline
        cout << endl;

        //switch statement to check which input the user made
        switch (choice)
        {
            //if the user entered 1, add 1 to the coffee total
            case 1: coffeeTotal ++;
                break;
            //if the user entered 1, add 1 to the tea total
            case 2: teaTotal ++;
                break;
            //if the user entered 1, add 1 to the coke total
            case 3: cokeTotal ++;
                break;
            //if the user entered 1, add 1 to the orange juice total
            case 4: orangeJuiceTotal ++;
                break;
        }

        //update the counter to keep track of the total number of inputs
        counter ++;

      // while condition to stay int he loop as long as the input is not -1
    } while (choice != -1);

    //output the results
    cout << "The total number of people surveyed is " << counter
         << ". The results are as follows:" << endl << endl;
    cout << "Beverage\t\tNumber of Votes" << endl;
    cout << "***************************************" << endl;
    cout << "Coffee\t\t\t" <<  coffeeTotal << "\nTea\t\t\t"
         <<  teaTotal << "\nCoke\t\t\t" <<  cokeTotal
         << "\nOrange Juice\t\t" << orangeJuiceTotal << endl;

    return 0;
}
/*
Please select a drink from the following menu by entering (1-4)

1.Coffee        2.Tea           3.Coke          4.Orange Juice
Please input the favorite beverage of person #1. choose 1. 2. 3. or 4 from
the above or -1 to exit the program.
4

Please input the favorite beverage of person #2. choose 1. 2. 3. or 4 from
the above or -1 to exit the program.
1

Please input the favorite beverage of person #3. choose 1. 2. 3. or 4 from
the above or -1 to exit the program.
3

Please input the favorite beverage of person #4. choose 1. 2. 3. or 4 from
the above or -1 to exit the program.
1

Please input the favorite beverage of person #5. choose 1. 2. 3. or 4 from
the above or -1 to exit the program.
1

Please input the favorite beverage of person #6. choose 1. 2. 3. or 4 from
the above or -1 to exit the program.
-1

The total number of people surveyed is 5. The results are as follows:

Beverage                Number of Votes
***************************************
Coffee                  3
Tea                     0
Coke                    1
Orange Juice            1
*/
