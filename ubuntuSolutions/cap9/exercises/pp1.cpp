#include <iostream>
#include <string>

using namespace std;

string compressBlanks(const string& s);
//Compresses all substrings of two or more
//blanks into a single blank.

string formatPhrasingCase(const string& s);
//Makes the first letter upper case and all
//the following lower case.

string formatNewLines(const string& s);
//Transforms newLines into a single
//blank space.

string get100CharInput();
//Receives input and returns a copy
//of that input as a string object.

int main()
{
	string phrase;
	phrase = get100CharInput();
	cout << "Original input: " << phrase << endl << endl;
	string formatted_phrase = formatPhrasingCase(phrase);
	cout << "With phrasal casing: " << formatted_phrase << endl << endl;
	string formatted_phrase2 = formatNewLines(formatted_phrase);
	cout << "Without newlines: " << formatted_phrase2 << endl << endl;
	string formatted_phrase3 = compressBlanks(formatted_phrase2);
	cout << "With compressed spaces: " << formatted_phrase3 << endl;

	return 0;
}

string get100CharInput()
{
	string input;
	cout << "Enter a line of input: ";
	getline(cin, input, '.');
	input += '.';
	return input;
}

string formatPhrasingCase(const string& s)
{
	string temp(s);
	temp[0] = toupper(s[0]);
	for (int i = 1; i < s.length(); i++)
	{
		temp[i] = tolower(s[i]);
	}
	return temp;
}

string formatNewLines(const string& s)
{
	string temp(s);
	for (int i=0; i<s.length(); i++)
	{
		if (s[i] == '\n') 
		{
			temp[i] = ' ';
		} else temp[i] = s[i];
	}
	return temp;
}

//This needs fixing! I did some sort of cheating. 
string compressBlanks(const string& s)
{
	string temp(s);
	for (int i=0; i<s.length(); i++) temp[i] = ' ';
	int j = 0, i = 0;
	while (s[i] != '.')	
	{
		if ((s[i] == ' ') && (s[i+1] == ' '))
		{
			i++;
		}
		else if ((s[i] == ' ') && (s[i+1] != ' '))
		{
			temp[j] = ' ';
			j++;
			i++;
		}
		else
		{
			temp[j] = s[i];
			j++;
			i++;
		}
	}
	temp[j] = '.';
	return temp; 
}







