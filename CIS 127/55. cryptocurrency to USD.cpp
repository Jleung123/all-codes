//Name:  Jeremy Leung
//Email: jeremy.leung59@myhunter.cuny.edu
//Date: October 16, 2021
//this program will convert crypto to USD

#include <iostream>	// needed to perform C++ I/O
#include <iomanip> // needed to set decimal precision

using namespace std;

int main()
{
	float ammount = 0; //initilize vairable to be used to convert latter
	
	cout << "Enter amount in cryptocurrency: "; //get user input
	cin >> ammount;
	
	cout << fixed << setprecision(2); //set precision to 2 decimals places
	
	cout << ammount << " BTC in USD: " << ammount * 31901.19 << endl; //convereted to BTC
	cout << ammount << " ETH in USD: " << ammount * 1901.54 << endl; //convereted to ETH
	cout << ammount << " DOGE in USD: " << ammount * 0.179733 << endl; //convereted to DOGE
	
    return 0;
}