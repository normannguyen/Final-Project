//Norman Nguyen
//Program: Learning Functions with Interactive Fiction using MULTIPLE FILES
//Story file

#include <iostream>
#include <string>
#include "Story.h"

using namespace std;

void WelcomeUser()
{
	cout << "Welcome to the new version of The (Unaccurate) Storytelling!\n\n";
	cout << "Much like the first game, you will be entering text from your choosing and it will print out the story." << endl;
	cout << "Keep in mind, this doesn't affect story, this is on imagination." << endl;
}
//Get Text from the user input
string GetUserText(string type)
{
	//String for Text/Word
	string userText;
	//Output String
	cout << type;
	//Get user input
	cin >> userText;
	//Return
	return userText;
}
//Get Number from the user input
int GetUserNumber(string type)
{
	//Integer
	int usersNumber;
	//Output String
	cout << type;
	//Get user input
	cin >> usersNumber;
	//Return
	return usersNumber;
}
//Get Name from the user input
string GetUserName(string type)
{
	string userName;
	//Output String
	cout << type;
	//Get user input
	cin >> userName;
	//Return
	return userName;
}

//Line Format
void LineFormat()
{
	cout << "\n";
	cout << "________________________________________________\n\n";
	cout << "________________________________________________\n\n";
	cout << "\n";
}