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
    string CnicNumber;
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


// Node CLASS
class Node
{
    // -------private section of class Node
private:
    // attributes of private section
    Node *next;
    // ----------Public section of class Node
public:
    // Object of account class
    Account objectOfAccountClass;

    // constructor and destructor of class Node;
    Node();
    ~Node();

    // GETTER AND SETTER OF Node CLASS to get and set NEXT Node
    void setnext(Node* b)
    {
        next = b;
    }
    Node* getnext()
    {
        return next;
    }
} ;


//constructors/destructor section of Node class------------implementation
Node::Node()
{
    next=NULL;
}
Node::~Node() {}

// end of Node Class
//----------------------------


//LinkedList class
class linkedlist
{
    //data section of LinkedList class
private:
    Node*start;
public:
// constructors/destructors section of LinkedList class
    linkedlist();
    ~linkedlist();
//function section of LinkedList class
    void search1();
    void displayAllAccounts();
    void display1(Node*node);
};


//end of LinkedList class-------definition

//constructors/destructors section of LinkedList class------------implementation
linkedlist::linkedlist()
{
    start = NULL;
}

linkedlist::~linkedlist() {}


//functions section of LinkedList class -------------------implementation


// START OF SEARCH FUNTION---------------------implementation
void linkedlist::search1()
{
    int choice;
//asking Choice
    cout << "BY WHICH METHOD YOU WANT TO SEARCH" << endl;
    cout << "PRESS 1 IF YOU WANT TO SEACRH BY NAME" << endl;
    cout << "PRESS 2 IF YOU WANT TO SEACRH BY ACCOUNT NUMBER" << endl;
    cout << "PRESS 3 IF YOU WANT TO SEACRH BY MOBILE NUMBER" << endl;
    cout << "PRESS 4 IF YOU WANT TO SEACRH BY CNIC NUMBER" << endl ;
    cin >> choice ;

// start of switch statement
    switch (choice)
    {
    case 1:
        {
        string NAME;
        cout << "ENTER THE NAME OF THE ACCOUNT HOLDER" << endl;
        cin >> NAME;
        Node*temp=start;                    // temp is the pointer which we use to find the required node
        while(temp->objectOfAccountClass.NameOfAccountHolder != NAME && temp != NULL)
        {
            temp=temp->getnext();
        }
        display1(temp);
        break;
        }
    case 2:
        {
        int number;
        cout << "ENTER THE ACCOUNT NUMBER OF THE ACCOUNT HOLDER" << endl;
        cin >> number;
        Node*temp1=start;
          while(temp1->objectOfAccountClass.AccountNumber != number && temp1 != NULL)
        {
            temp1=temp1->getnext();
        }
        display1(temp1);
        break;
        }
    case 3:
        {
         long mobilenumber;
        cout << "ENTER THE MOBILE NUMBER OF THE ACCOUNT HOLDER" << endl;
        cin >> mobilenumber;
        Node*temp2=start;
          while(temp2->objectOfAccountClass.MobileNumber != mobilenumber && temp2 != NULL)
        {
            temp2=temp2->getnext();
        }
        display1(temp2);
        break;
        }
    case 4:
        {
        string cnic;
        cout << "ENTER THE MOBILE NUMBER OF THE ACCOUNT HOLDER" << endl;
        cin >> cnic;
        Node*temp3=start;
          while(temp3->objectOfAccountClass.CnicNumber != cnic && temp3 != NULL)
        {
            temp3=temp3->getnext();
        }
        display1(temp3);
        break;
        }
    default:
        cout << "INVALID CHOICE" << endl;

    }
// end of switch statement


} // END OF SEARCH FUNCTION ------------------ implementation


// INNER display function to which we will pass node
void linkedlist::display1(Node*node)
    {
        cout << "-------------------------------------" << endl;
        cout << "FOLLOWING ARE THe DETAILS OF THE ACCOUNTS " << endl;
        cout << node->objectOfAccountClass.NameOfAccountHolder << endl;
        cout << node->objectOfAccountClass.AccountNumber << endl;
        cout << node->objectOfAccountClass.CashInAccount << endl;
        cout << node->objectOfAccountClass.MobileNumber << endl;
        cout << node->objectOfAccountClass.CnicNumber << endl;
        cout << node->objectOfAccountClass.CityOfAccountHolder << endl;
        cout << node->objectOfAccountClass.EmailOfAccoutHolder << endl;
        cout << "--------------------------------------" << endl;
    } // END OF INNER DISPLAY FUNCTION-------------------------- implementation


//START OF DISPLAY_ALL_ACCOUNTS FUNCTION ----------------- implementation
void linkedlist::displayAllAccounts()
{
    Node*temp=start;
    while(temp!=NULL)
    {
        display1(temp);
        temp=temp->getnext();
    }
} // END OF DISPLAY_ALL_ACCOUNTS FUNCTION ------------------ implementation



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
        printf("\n5. Search an Account ");
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
            cout << "Search an Account" << endl;
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

    }
    while (choiceToExitLoop == 'y' );


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
