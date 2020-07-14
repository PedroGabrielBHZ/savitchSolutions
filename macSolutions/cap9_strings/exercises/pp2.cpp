#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string makeLower(const string& s);

int charToInt(char a);

char intToChar(int n);

void countLetters(const string& s);

void countWords(const string& s);

int main() 
{
	string s = "I say Hi.";
	countWords(s);
	countLetters(s);
	return 0;
}

string makeLower(const string& s)
{
	string temp(s);
	for (int i = 0; i < s.length(); i++)
		temp[i] = tolower(s[i]);
	return temp;
}

int charToInt(char a)
{
	return (static_cast<int>(a)-97);
}

char intToChar(int n)
{
	return (static_cast<char>(n+97));
}

void countLetters(const string& s)
{
	string s_lower = makeLower(s);
	int letterCount[26];
	for (int i = 0; i < 26; i++)
	{
		letterCount[i] = 0;
	}
	for (int i = 0; i < s_lower.length(); i++)
	{
		letterCount[charToInt(s_lower[i])]++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (letterCount[i] != 0)
		{
			cout << letterCount[i] 
				<< " " << intToChar(i) << endl;	
		}
	}
}

void countWords(const string& s)
{
	string punct(",;:.?!\" ");
	int wordCounter = 0;
	bool precededByPunct = false;
	for (int i = 0; i < s.length(); i++)
	{
		int location = punct.find(s[i], 0);
		if (location >= 0 && !precededByPunct) 
		{
			wordCounter++;
			precededByPunct = true;
		} else {precededByPunct = false;}
	}
	cout << wordCounter << " words.\n";
}

