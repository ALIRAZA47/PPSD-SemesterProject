// projectC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This os project CPP file of Professional Practices in Softwere Development
//by
// Syed Uzair, Zeemal Urooj, Qazi Arsalan Shah and Ali Raza Khan
/*
*******************************

This project is related to "Bank Management System"
Main idea behind is ease in banking system

*******************************
*/


//Start of library files section

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <conio.h>

//End of library files section


//start of namespace section

using namespace std;

//end of namespace section


//start constants section

const int NumberOfTotalAccounts = 5;

//end of constants section


//------start of classes or user defined types-------CLASSES

//start of ACCOUNT class declaration----
class Account
{
public:
    //------- DECLARATION OF THE ATTRIBUTES WHICH WE REQURIED FOR AN ACCOUNT
    int AccountNumber;
    int CashInAccount;
    long MobileNumber;
    string NameOfAccountHolder;
    string CityOfAccountHolder;
    string EmailOfAccoutHolder;
//-----CONSTRUCTORS and DESTRUCTORS section------ DECLARATION
	Account();
	~Account();
//----- FUNCTIONS declaration section


//private or data definition section
private:

};

/*
-----------
ACCOUNT class DEFINITION ended
-----------
*/
//start of ACCOUNT class implementation

//CONSTRUCTORS and DESTRUCTORS section------ IMPLEMENTATION
Account::Account() {}

Account::~Account() {}


//.........

//FUNCTIONS of ACCOUNT class section------ IMPLEMENTATION



//end of ACCOUNT class implementation

//------------------------------

//BankManagmentSystem class
class BankManagementSystem
{
public:
// constructors/destructors section of BankManagementSystem class
	BankManagementSystem();
	~BankManagementSystem();
//function section of BankManagementSystem class
	// start of searchfunction
	void search()
	{
		cout <<

	}
//data section of BankManagementSystem class
private:

};


//end of BankManagementSystem class-------definition

//constructors/destructors section of BankManagementSystem class------------implementation
BankManagementSystem::BankManagementSystem() {}

BankManagementSystem::~BankManagementSystem() {}


//functions section of BankManagementSystem class -------------------implementation







//start of main function
int main()
{
	//start of variables section--mian()
	char  choiceToExitLoop;
	int choiceOfMenu, choiceForInternalSwitch;

	//menu to display



	cout << "=======================" << endl;
	cout << "Bank Management System" <<endl ;
	cout << "=======================" << endl;

	do
	{
//showing menu
		printf("\n ::Main Menu::\n");
		printf("\n1. Make New Account ");
		printf("\n2. Transfer Amount to Another Account ");
		printf("\n3. Deposit Amount in Account ");
		printf("\n4. Withdarw Amount from Account ");
		printf("\n5. Account Options ");
		printf("\n6. Close Account ");
		printf("\n7. Display Account Holders List ");
		printf("\n \n Select one Option of Your Choice");
		cin >> choiceOfMenu;
//switch statement to choose menu
		switch (choiceOfMenu)
		{
		case 1:
			cout << "Making New Account" << endl;
		break;
		case 2:
			cout << "Amount Transfer Section" << endl;
		break;
		case 3:
			cout << "Amount Deposit Section" << endl;
		break;
		case 4:
			cout << "Withdraw Section" << endl;
		break;
		case 5:
			cout << "Accounts Option Section" << endl;
		break;
		case 6:
			cout << "Close Account Section" << endl;
		break;
		case 7:
			cout << "Display Account Holders List Section" << endl;
		break;
		default:
		break;
		}
		printf("Do You Want to Continue--- (y/n)--  ");
		cin >> choiceToExitLoop;
		printf("\n____________________________________\n");

	} while (choiceToExitLoop == 'y' );


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
