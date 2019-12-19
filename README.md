# Bank Management System
#  Team Members
* Qazi Arsalan Shah
* Ali Raza Khan
* Syed Uzair Ul Hassan
* Zeemal Urooj
## Introduction
The Bank Account Management System is an application for maintaining a person's account in a bank. In this project we tried to show the working of a banking account system and cover the basic functionality of a Bank Account Management System. To develop a project for solving financial applications of a customer in banking environment in order to nurture the needs of an end banking user by providing various ways to perform banking tasks.
## Functionality
The application contains following functions
*  Open new Account
* Close Account
* Deposit Cash
* WithDraw Cash
* Transform Amount
etc.

We also included An Extra option as EasyPaisa provides "**Account options**"  which allows user to modify different account details such as ,
* Change Pin
* Change Name
* Change Email
* Change Phone Number
## Work Details
As this was a group task and was to check our GitHub usage and to familiarize us with git so we made a repository on GitHub and added everyone as contributor. Main Template was set for coding in Both Code Blocks and Visual Studio and then uploaded on Master branch. Everyone worked in his/her own branch and after completing his/her work pushed on his/her branch with a review and merge request to master to avoid conflicts.
We used Linked Listed (Dynamic Data Structure) for storing data instead of arrays.
Three Different classes were created,


**Account Class**: Containing all the attributes which are required for opening an account i.e name, email , phone number etc.


**Person Class**: Containing object of Account class plus Address of next person object.

**Bank Management Class** : First pointer that holds the chain of accounts.
***
1. AddNewAccount Function will take required arguments from user and creates new account.
2. Delete Account Function will Ask user to enter his/her account id , if id matches then it will ask for pin , if pin matches then will delete his/her account.
3. WithDraw cash Function will ask for User Id , if id macthes then will ask for pin , if pin matches then will ask how much amount you want to withdraw if there is enough amount in your account it will be withdrawn else will reject the request.
etc
