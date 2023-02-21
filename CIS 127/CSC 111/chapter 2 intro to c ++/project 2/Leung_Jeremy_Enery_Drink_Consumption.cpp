/*
This program will output the results of a survey
of those that drink energy drinks and their preferences
*/

// Jeremy Leung

#include <iostream>
using namespace std;

// Definition of constants
int totalSurveyed = 16500;

int main()
{
	double moreThen1DrinksPerWeek = 0.15; // percentage of those who drink more then 1 per week
	double peopleWhoLikeCitrus = 0.58; // percentage of those who prefer citrus drinks

	/*
        calculations to get the number of people who drink more then 1 drink a week
        and how many people preferred citrus drinks
    */
	double MoreDrinksPerWeek = totalSurveyed * moreThen1DrinksPerWeek;
	double citrusLovers = MoreDrinksPerWeek * peopleWhoLikeCitrus;

    // output the results, in line 29 int cast to get a integer value.
	cout << MoreDrinksPerWeek << " customers purchased one or more energy drinks per week.\n"
        << int(citrusLovers) << " of those customers preferred citrus flavored energy drink." << endl;

	return 0;
}
