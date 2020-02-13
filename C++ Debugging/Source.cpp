 // This line only needed for console C++ project, omit this for Empty C++ Project.
// This line is not for the current version of C++. It is not needed for this program.
//#include "pch.h" // This line only needed for console C++ project, omit this for Empty C++ Project.
#include <iostream>
#include <string>

using namespace std;


int main()
{
	//This is a string that can be call below to initialize what is below it.
	string textToAnalyze;
	//int foo is not used with in the program. It is not needed because nothing is using it.
	//int foo = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	//int bar is not used with in the program. It isn't needed because nothing is using it.
	//int bar = 0;
	
	//Welcomes them and tells them what to do.
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	// What this is doing is grabbing the string above and initializing all the int with in it. 
	getline(cin, textToAnalyze);

	// This loop is checking each of the vowels
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		//This if loop is going through the loop in array format
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			//vowels were negative, I have changed it to ++ to make the code actually work.
			++vowels;
		}
		//What this does is allows for the user to input a letter, it allows for the letter to be lower case or upper case. Depending on the users input.
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{
			// consonants was commented out I have removed it, to make the code actually work
			++consonants;
		}
		//This line is just saying that the numbers that are entered in the console is greater than or equal to 0 and less than or equal to 9.
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			//This counts the numbers that the user has entered 1 through 9. 
			++digits;
		}
		//This shows the amount of spaces that the user has done.
		else if (textToAnalyze[i] == ' ')
		{
			//This inputs the amount of spaces there were.
			++spaces;
		}
		else
		{
			//This states the amount of unknown characters in a sentence or word.
			++unknownCharacters;
		}
	}

	//This shows the length of the sentence or text.
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	//This adds everything up and then comes out as the checksum.
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	//This shows the results of the user input.
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	//This line of code grabs the data above and says that it is a valid analysis.
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}

	//This line tells me if the code isn't done correctly or that it has errors.
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}