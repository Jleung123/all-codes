#include <iostream>
/*
Author: Jeremy Leung
Course: CSCI-13500
Instructor: Tong Yi
Assignment: sum, project A

This program will add the sum of ints from a txt file
*/
using namespace std;

int main()
{
    int total, num = 0; //declare variables
    string s = "";

    cin >> s;
    num = int(s);

    while(cin >> s) // While the reading operation is a success
    {
        if (s == "+")
        {
            if(isdigit(s))
            {
                num = int(s);
                total = total + num; //keep a running count of the num if the +
            }
        }
        else if s =="-")
        {
            if(isdigit(s))
            {
                num = int(s);
                total = total + num; //keep a running count of the num if the +
            }
        }
    }

    cout << total << endl; //print out the total to the screen

    return 0;
}

