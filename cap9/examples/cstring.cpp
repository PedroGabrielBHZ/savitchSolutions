#include <iostream>
#include <cstring>
using namespace std;

int customLen(char a[])
{
	int i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return i;
}

void putX(char a[])
{
	int i = 0;
	while (a[i] != '\0')
	{
		a[i] = 'X';
		i++;
	}
}

int main() 
{
	// A beautiful initialization:
	char myMessage[20] = "Hi there, stranger.";
	cout << myMessage << endl;

	// You cannot assign a value to a C-string anywhere
	// but in the initialization. e.x.
	// char aString[10];
	// aString = "Hello"; <-- Illegal!
	
	// Another way to assign a value to a C-string variable:
	char anotherString[20];
	strncpy(anotherString, myMessage, 20);
	cout << anotherString << endl;

	// To test whether two C-strings are the same, you can
	// use the predefined function strcmp().
	if (strcmp(myMessage, anotherString))
		cout << "The strings are NOT the same.\n";
	else
		cout << "The strings are the same.\n";
	
	// Some utilities
	char str1[] = "Life is ";
	char str2[] = "beautiful";
	putX(str2);
	// Concatenates two strings
	cout << strcat(str1, str2) << endl;
	// Returns length of string
	cout << strlen(str2) << endl;

	cout << "Custom function for length output: " <<
		customLen(str2) << endl;
}
