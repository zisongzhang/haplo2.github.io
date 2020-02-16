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
#include <cstring>

using namespace std;
int user_num = 2; 
string user_name[2] = {"peter", "tyler"};
string password[2] = {"123456", "223344"};
double account[2] = {100,5000};

using std::cin;
using std::cout;
using std::endl;
using std::string;
/*
struct Bank {
	struct User* root;
};
*/
struct User{
    string name;
    string password;
    double account;
};

void set_user(struct User*user) // store user information to struct
{
	for (int i = 0; i< user_num; i++){
		user[i].name = user_name[i];
		user[i].password = password[i];
		user[i].account = account[i];
	}
}

void check_user(struct User*user) // print all the user information in the struct
{
	for (int i = 0; i< user_num; i++){
		cout<<"user "<< i << endl;
		cout<<"name: "<< user[i].name<<endl; 
		cout<<"password: "<< user[i].password<<endl;
		cout<<"accout: "<< user[i].account<<endl;
	}
}

string password_input()
{
	string password = "";
	char ch;
	//ch = _getch();
	while(ch != 13){
		password.push_back(ch);
      	cout << '*';
      	//ch = _getch();
	}
	return password;
}

double get_account(struct User* user, string input_name, string input_password) // to get user account
{
	for (int i = 0; i < user_num; i++){
		if (user[i].name == input_name and user[i].password == input_password ){
			return user[i].account;
		}
	}
	return 0;
}
bool check_input_name(struct User* user, string input_name)
{
	for (int i = 0; i < user_num; i++){
		if (user[i].name == input_name){
			return true;
		}
	}
	return false;
}

bool check_password(struct User* user, string u_password, string u_name) // check password
{
    for (int i = 0; i< user_num; i++){
        if (u_name == user[i].name){
            if (user[i].password == u_password)
            {
                return true; // find the password
            }
        }
    }
	return false; // didn't find the password
}


int main()
{ //open main
	string input_name; // to store user_name
	string input_password; // to store user input password
	double account; //to store account

	int userChoice, acctId, acctBal; //declare variables for user input & account info

//use while loop to get user input and perform input validation
	userChoice = 0;

	cout<<"hellow word"<<endl;
	struct User* user = new User[user_num]; //create struct
	cout<< user_num <<endl; 
	set_user(user); // set struct
	check_user(user); // print struct

	cout << endl << "Would you like to view your current account balance?" << endl;
    cout << "please enter the number 1 or 2"<< endl;
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
	
	if(userChoice == 2){
		cout<<"you successfully log out, thank you!"<<endl;
		return 0;
	}else{
		do{
			cout<<"please input your accout name: "<<endl;// ask user to input name
			cin>> input_name;
			if(check_input_name(user,input_name) == false){
				cout << "accout name is not exit, please input again"<<endl;
			}
		}while(check_input_name(user,input_name) == false);
		do{
			cout<<"please input your password: "<<endl;
			cin>> input_password;
			//input_password = password_input();
			if(check_password(user,input_password, input_name) == false){
				cout << "password is wrong, please input again"<<endl;
			}
		}while(check_password(user,input_password, input_name) == false);

		account = get_account(user, input_name, input_password);
		
		cout << "For account # " << input_name << " the current balance is " << account << "." << endl;
	

	cout << "Press Enter to exit."<<endl;
	cin.get();
	}

	return 0;
} //close main



