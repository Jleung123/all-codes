/*
    This program will calculate the the total number of sick days the employees
    of a back took for the past 3 years
*/

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
    //declare variables
    int employee, total = 0, days;

    //ask user for a input for the amount of employees at the bank
    cout << "How many tellers worked at Nation's bank during each of the last  "
         << "three years?" << endl;
    cin >> employee;

    //nested for loop to keep track on the employee
    for (int i = 1; i <= employee; i++)
    {
        //inner for loop to keep track of the sick days
        for (int x = 1; x <= 3; x++)
        {
            //calculate the distance fallen per second

            cout << "How many days was teller " << i
                 << " out sick during year " << x << "? "<< endl;
            cin >> days;

            //keep count of the total days
            total += days;
        }
    }
    cout << "The " << employee << " tellers were out sick for a total of "
         << total << " days during the past 3 years." << endl;

    return 0;
}
/*
How many tellers worked at Nation's bank during each of the last  three years?
2
How many days was teller 1 out sick during year 1?
5
How many days was teller 1 out sick during year 2?
8
How many days was teller 1 out sick during year 3?
2
How many days was teller 2 out sick during year 1?
1
How many days was teller 2 out sick during year 2?
0
How many days was teller 2 out sick during year 3?
3
The 2 tellers were out sick for a total of 19 days during the past 3 years.
*/
