/*
    This program will conduct a survey of the preferred drink from as
    many input as the user makes until the input is -1
*/

// Jeremy Leung

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    //declare variables
    double time = 0, height = 0, distance = 0;

    //ask user for a input for time
    cout << "Please input the time of fall in seconds:" << endl;
    cin >> time;

    //ask user for a input for height
    cout << "Please input the height of the bridge in meters:" << endl;
    cin >> height;

    //display the table
    cout << "\nTime Falling (seconds) DistanceFallen(meters)" << endl;
    cout << "*********************************************" << endl;

    //for loop to calculating the distance fallen each second
    for (int i = 0; i <= time; i++)
    {
        //calculate the distance fallen per second
        distance = (0.5 * 9.8 * pow(i, 2));

        //output the results
        cout << i << "\t\t\t" << distance << endl;
    }

    if (distance > height)
    {
        cout << "Warning-Bad Data: The distance fallen exceeds the height of the bridge";
    }

    return 0;
}
/*
Please input the time of fall in seconds:
2
Please input the height of the bridge in meters:
100

Time Falling (seconds) DistanceFallen(meters)
*********************************************
0                       0
1                       4.9
2                       19.6

----------------------------------------------------
Please input the time of fall in seconds:
4
Please input the height of the bridge in meters:
50

Time Falling (seconds) DistanceFallen(meters)
*********************************************
0                       0
1                       4.9
2                       19.6
3                       44.1
4                       78.4
Warning-Bad Data: The distance fallen exceeds the height of the bridge
*/
