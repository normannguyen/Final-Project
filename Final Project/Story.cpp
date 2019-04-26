//Norman Nguyen
//Program: Learning Functions with Interactive Fiction using MULTIPLE FILES
//Story file

#include <iostream>
#include <string>
#include "Story.h"

using namespace std;
bool playAgain = false;
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
void StoryTime()
{
	do
	{
		string Name = GetUserName("\n\Enter your Name:");
		//Type Number
		int Number = GetUserNumber("\n\Enter your Number:");
		//Type Text/WordChoice
		string Word = GetUserText("\n\Enter your Text/Word Choice like pick an action (run/walk):");
		//Type Second Text/WordChoice
		string Word2 = GetUserText("\n\Enter your Text/Word Choice (walking/jogging):");
		LineFormat();
		cout << "Hello, my name is " + Name + ". My story today is unusual to tell" << ".";
		cout << "\n\nOnce upon a time, I was " + Word2 + " around the woods minding my business.";
		cout << "\nAll the sudden a unknown creature has caught my attention where I decided to see it for myself.";
		cout << "\nBut then, it turns out to be a group of wild animals consist of " << Number << " of them.";
		cout << "\nUnfortunately, they're unfriendly as this forces myself to " + Word + "away from the them as they're chasing me.";
		cout << "\nLuckily, I made it out alive until I bumped into a cabin.";
		LineFormat();
		string Word3 = GetUserText("\nEnter your next Text/Word Choice (yell/chase) [Same, but different ways it goes which it's unaccurate]:");
		string Word4 = GetUserText("Enter another word, but about this person (Lunatic/Mad Man):");
		cout << "\nI decided to see what's inside the cabin, it turns out it was a hill billy who invited me in.";
		cout << "\nThe hill billy looked at me like I never seen one before, so he decided to " + Word3 + " at me to get off his property.";
		cout << "\nI ran outside again from getting chased by wild animals to getting chased by a hill billy.";
		cout << "\nAs I was running a sheriff sees me running from that crazed " + Word4 + ".";
		cout << "\nThe sheriff said, 'Hold it right there!' this is the crook we've been looking for.";
		cout << "\n\nIn the End, I saved from my wildest stories.";
		cout << "\n\nThe End.\n\n";
		string playerChoice;
		//Enter your choice of yes or no.
		cout << "Would you like to play again? Y/N" << endl;
		cin >> playerChoice;
		if (playerChoice == "y" || playerChoice == "Y")
		{
			playAgain = true;
		}
		//No
		else if (playerChoice == "n" || playerChoice == "N")
		{
			//Allow simulation to finish
			cout << "\nSimulation Ended, proceed to exit." << endl;
			system("pause");
		}
		else
		{
			cout << "Please input Y or N..." << endl;
			cin >> playAgain;
		}
	} while (playAgain == true);
}