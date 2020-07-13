#include <iostream>
#include <string>

using namespace std;
// Let's first assume that there are only blanks
// between words, for simplicity's sake.

string getWordAtIndex(const string& s, int i);

string loveTransformation(const string& s);

int main()
{
	string s;
	cout << "Enter something, will you? : ";
	getline(cin, s);
	cout << loveTransformation(s);
}

string getWordAtIndex(const string& s, int i)
{
	string word;
	while (s[i] != ' ' && s[i] != '.') //Adapt for punctuation.
	{
		word += s[i];
		i++;
	}
	return word;
}

string loveTransformation(const string& s)
{
	string loveString;
	string currentWord;

	for (int i = 0; i < s.length(); i++)
	{
		if (i == 0)
		{
			currentWord = getWordAtIndex(s, i);
			if (currentWord.length() == 4)
				currentWord = "love";
			loveString += currentWord + " ";
		}
	        else if (s[i] == ' ')
		{
			currentWord = getWordAtIndex(s, i+1);
			if (currentWord.length() == 4)
				currentWord = "love";
			loveString += currentWord + " ";
		}
	}
	return loveString;
}
