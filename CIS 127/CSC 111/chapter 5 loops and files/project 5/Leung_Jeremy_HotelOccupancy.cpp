/*
    This program determine how many rooms there are on each floor and
    calculate the occupancy for the hotel
*/

// Jeremy Leung

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables
    int floors, lowestFloor, rooms, occRooms, totalRooms = 0, totalOccRooms = 0;
    float occRate = 0;

    //to round the decimal points by 1
    cout << setprecision(1) << fixed << showpoint;

     /*
        ask user to enter the amount floors in the hotel
        with a while loop as input validation to make sure user can't enter a value
        0 or lower
    */
    cout << "How many floors does the hotel have? ";
    cin >> floors;
    while (floors < 1)
    {
        cout << "A hotel cannot have 0 or fewer floors: ";
        cin >> floors;
    }

    /*
        ask user to enter the lowest floor with available rooms
        with a while loop as input validation to make sure user can't enter a value
        higher then the amount of floors in the hotel
    */
    cout << "What is the hotel's lowest floor with rooms? ";
    cin >> lowestFloor;
    while (lowestFloor > floors)
    {
        cout << "This number should be not bigger then 15: ";
        cin >> lowestFloor;
    }

    //for loop to iterate for each floor asking for amount of rooms and rooms occupied
    for (int i = lowestFloor; i <= floors; i++)
    {
        //if statement to skip the floor if the floor is floor 13
        if (i == 13) i = 14;

        /*
        ask the user to enter the amount of rooms on the floor
        with a while loop as input validation to make sure user can't enter a value
        higher then the amount of rooms less then 10 rooms
        */
        cout << "How many rooms are on floor " << i << "? ";
        cin >> rooms;
        while(rooms < 10)
        {
            cout << "Please enter 10 or more: ";
            cin >> rooms;
        }
        //to keep count of the amount of total rooms in the hotel
        totalRooms += rooms;

        /*
        ask user to enter the lowest rooms occupied
        with a while loop as input validation to make sure user can't enter a value
        higher then the amount of floors in the hotel
        */
        cout << "How many of those rooms are occupied? ";
        cin >> occRooms;
        while(occRooms > rooms)
        {
            cout << "The number should be in the range of 0 through " << rooms << ": ";
            cin >> occRooms;
        }
        //to keep count of the amount of total occupied rooms in the hotel
        totalOccRooms += occRooms;
    }

    //calculate the occupancy rate of the hotel
    occRate = (float(totalOccRooms) * 100) / float(totalRooms);

    //output the results
    cout << "The hotel has a total of " << totalRooms << " rooms." << endl;
    cout << totalOccRooms << " are occupied." << endl;
    cout << totalRooms - totalOccRooms << " are empty." << endl;
    cout << "The occupancy rate is " << occRate << "%" << endl;

    return 0;
}
/*
How many floors does the hotel have? 15
What is the hotel's lowest floor with rooms? 16
This number should be not bigger then 15: 10
How many rooms are on floor 10? 5
Please enter 10 or more: 14
How many of those rooms are occupied? 15
The number should be in the range of 0 through 14: 8
How many rooms are on floor 11? 6
Please enter 10 or more: 12
How many of those rooms are occupied? 10
How many rooms are on floor 12? 10
How many of those rooms are occupied? 7
How many rooms are on floor 14? 11
How many of those rooms are occupied? 9
How many rooms are on floor 15? 15
How many of those rooms are occupied? 12
The hotel has a total of 62 rooms.
46 are occupied.
16 are empty.
The occupancy rate is 174.2%
*/
