#include <iostream>

using namespace std;

//Enter a full name in format of first name first, last name last,
//find out the first name and last name,
//then find out the initial.
int main()
{
    //Enter name from console interactively.
    cout << "Enter name in format of first name first, last name last: ";
    string name;
    cin >> name; //get name from user input

    //process name to extract last name and first name.
    size_t index = name.find(" ");
    //index is the location of the first occurrence of " " in name.
    if(index != std::string::npos) //no space in name
    {
        cout << "no space in input name, cannot proceed" << endl;
        return -1;
    }

    string firstName = name.substr(0, index);
    string lastName = name.substr(index + 1);
    cout << lastName + " , " + firstName << endl;
    //find out the initial

    return 0;
}
