/********************************************************************
** Author: Team 28
** Date: 2-5-20
** Description: Running balance drives the portion of BankIt that 
** takes user input to identify a specific account, finds the current
** balance value for that account id, and displays it to the user.
*********************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>



using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{ //open main

	int userChoice, acctId, acctBal; //declare variables for user input & account info

//use while loop to get user input and perform input validation
	userChoice = 0;

	cout << endl << "Would you like to view your current account balance?" << endl;
	cout << "1: Yes" << endl;
	cout << "2: No" << endl;
	cin >> userChoice;

	while (!(userChoice == 1 || userChoice == 2))
	{ //open input validation while loop
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "That is not a valid selection. Please enter 1 or 2." << endl;
		cout << endl << "1: Yes" << endl;
		cout << "2: No" << endl;
		cin >> userChoice;
		userChoice = ((int)userChoice / 1);
	} //close input validation while loop
	cin.ignore(1000, '\n');

	cout << endl;

	acctId = 0000001;
	acctBal = 10000;
	cout << "For account # " << acctId << " the current balance is " <<
		acctBal << "." << endl;
	

	cout << "Press Enter to exit.";
	cin.get();


	return 0;
} //close main

