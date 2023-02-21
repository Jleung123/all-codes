//this program will calculate the average score of 5 judges using functions

// Jeremy Leung

#include <iostream>
#include <iomanip>
using namespace std;

//function declarations
void getJudgeData(double &);
void CalcScore(double, double, double, double, double);
int findLowest(double, double, double, double, double);
int findHighest(double, double, double, double, double);

int main()
{
    //declare variables
	double score1, score2, score3, score4, score5;

	cout << setprecision(2) << fixed;

	//display instructions for the user to input data
	cout << "After you enter 5 judge scores for this contestant,\n"
         << "this program will drop the highest and lowest score\n"
         << "and then average the remaining three scores." << endl << endl;

	//call functions to get the data
	getJudgeData(score1);
	getJudgeData(score2);
	getJudgeData(score3);
	getJudgeData(score4);
	getJudgeData(score5);

	//call function to calculate the results and display the average
    CalcScore(score1, score2, score3, score4, score5);

	return 0;
}

//function to get the input for the judges
void getJudgeData(double &score)
{
    //calculate the average by dividing the avg by the number of inputs
	cout << "Enter score between 0 and 10 : ";
	cin >> score;

	//while loop as input validation to make sure the use and only enter a score between 0 - 10
	while (score < 0 || score > 10)
    {
        cout << "Invalid Score!!!\nEnter score between 0 and 10 : ";
        cin >> score;
    }
}

//function to get calculate the average score of of the judges
void CalcScore(double score1, double score2, double score3, double score4, double score5)
{
    //declare variable avg to calculate the total avg score
    double avg, lowest, highest;

    //call functions findLowest and findHighest and set the equal to variables lowest and highest
    lowest = findLowest(score1, score2, score3, score4, score5);
    highest = findHighest(score1, score2, score3, score4, score5);

    //calculate the average
    avg = (score1 + score2 + score3 + score4 + score5 - lowest - highest) / 3;

    //output the result
    cout << "\nThis contestant's score is " << avg << endl;
}

//function to find the lowest score
int findLowest(double score1, double score2, double score3, double score4, double score5)
{
    //declare variable
    double lowest = score1;

    //if statements to check if the score is lower then the previous score,
    //if true delete the previous score and set the value of the current score to the variable lowest
    if (lowest < score2) lowest = score2;
    if (lowest < score3) lowest = score3;
    if (lowest < score4) lowest = score4;
    if (lowest < score5) lowest = score5;

    return lowest;
}

//function to find the highest score
int findHighest(double score1, double score2, double score3, double score4, double score5)
{
    //declare variable
    double highest = score1;

    //if statements to check if the score is highest then the previous score,
    //if true delete the previous score and set the value of the current score to the variable highest
    if (highest > score2) highest = score2;
    if (highest > score3) highest = score3;
    if (highest > score4) highest = score4;
    if (highest > score5) highest = score5;

    return highest;
}
/*
After you enter 5 judge scores for this contestant,
this program will drop the highest and lowest score
and then average the remaining three scores.

Enter score between 0 and 10 : 9
Enter score between 0 and 10 : 8
Enter score between 0 and 10 : 8
Enter score between 0 and 10 : 7
Enter score between 0 and 10 : 9

This contestant's score is 8.33
*/
