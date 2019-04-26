//Norman Nguyen
//Program: Learning Functions with Interactive Fiction using MULTIPLE FILES

#include <iostream>
#include <string>
#include "Story.h"
//Using NameSpace Standard Library
using namespace std;
//Main Function
int main()
{
	//Welcome Message
	WelcomeUser();
	//Type Name
	string Name = GetUserName("\n\Enter your Name:");
	//Type Number
	int Number = GetUserNumber("\n\Enter your Number:");
	//Type Text/WordChoice
	string Word = GetUserText("\n\Enter your Text/Word Choice like pick an action (run/walk):");
	//Type Second Text/WordChoice
	string Word2 = GetUserText("\n\Enter your Text/Word Choice (walking/jogging):");
	//Storytime
	LineFormat();
	//First
	cout << "Hello, my name is " + Name + ". My story today is unusual to tell" << ".";
	cout << "\n\nOnce upon a time, I was " + Word2 + " around the woods minding my business.";
	cout << "\nAll the sudden a unknown creature has caught my attention where I decided to see it for myself.";
	cout << "\nBut then, it turns out to be a group of wild animals consist of " << Number << " of them.";
	cout << "\nUnfortunately, they're unfriendly as this forces myself to " + Word + "away from the them as they're chasing me.";
	cout << "\nLuckily, I made it out alive until I bumped into a cabin.";
	LineFormat();
	//Second
	string Word3 = GetUserText("\nEnter your next Text/Word Choice (yell/chase) [Same, but different ways it goes which it's unaccurate]:");
	string Word4 = GetUserText("Enter another word, but about this person (Lunatic/Mad Man):");
	LineFormat();
	cout << "\nI decided to see what's inside the cabin, it turns out it was a hill billy who invited me in.";
	cout << "\nThe hill billy looked at me like I never seen one before, so he decided to " + Word3 + " at me to get off his property.";
	cout << "\nI ran outside again from getting chased by wild animals to getting chased by a hill billy.";
	cout << "\nAs I was running a sheriff sees me running from that crazed " + Word4 + ".";
	cout << "\nThe sheriff said, 'Hold it right there!' this is the crook we've been looking for.";
	cout << "\n\nIn the End, I saved from my wildest stories.";
	cout << "\n\nThe End.";
	LineFormat();
	//Pause
	system("pause");
	return 0;
}