#include <iostream>
#include <iomanip>
using namespace std;

// this program will convert miles to kilometers and kilometers to miles

// Jeremy Leung

//global variables for all functions to use
double wins, loses;

//declare functions
float getWins();
float getLoses();
float getPercentage(float, float);

int main()
{
    //declare variable
    float percent;

    //set decimal precision to 2 points
	cout << fixed << showpoint << setprecision(2);

	//call functions getWins and getLoses and set them to the variables wins and loses
	wins = getWins();
    loses = getLoses();

    //call function getPercentage and pass the vales from wins and loses and set the value = to percent
    percent = getPercentage(wins, loses);

    //output the result
    cout << "The percentage of wins is " << percent << "%" << endl;

	return 0;
}

//function to get the number of wins
float getWins()
{
    cout << "Please input the number of wins" << endl;
	cin >> wins;

	//return wins to the calling function
	return wins;
}

//functions to get the number of loses
float getLoses()
{
	//ask user to input number of loses
    cout << "Please input the number of loses" << endl;
    cin >> loses;

    //return loses to the calling function
    return loses;
}

//function to get the winning percentage
float getPercentage(float wins, float loses)
{
    //calculate the percentage and return it to the calling function
    return (wins * 100) / (wins + loses);
}
/*
Please input the number of wins
80
Please input the number of loses
40
The percentage of wins is 66.67%
*/
