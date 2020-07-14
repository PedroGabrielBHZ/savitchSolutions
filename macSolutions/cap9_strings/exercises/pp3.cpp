#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void getName(string& fN, string& mN, string& lN);

void printName(string& fN, string& mN, string& lN);

int main()
{
	string firstName, middleName, lastName;
	getName(firstName, middleName, lastName);
	printName(firstName, middleName, lastName);
}

void getName(string& fN, string& mN, string& lN)
{
	cout << "Enter your first name: ";
	cin >> fN;
	cout << "Enter your middle name (to leave it empty enter 0): ";
	cin >> mN;
	cout << "Enter your last name: ";
	cin >> lN;
}

void printName(string& fN, string& mN, string& lN)
{
	cout << lN << ", ";
	cout << fN << " ";
	if (mN != "0") 
	{
		cout << mN[0] << ".\n";
	}
}	
