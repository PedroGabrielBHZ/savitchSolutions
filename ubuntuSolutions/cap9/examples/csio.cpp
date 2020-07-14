#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	// // Getting input:
	// char c[80];
	// cout << "Enter some input:\n";
	// cin.getline(c, 80);
	// cout << c << " - END OF OUTPUT\n";

	// // Reads the next input char
	// // and stores it in nextSymbol
	// char nextSymbol;
	// cout << "Enter a symbol: ";
	// cin.get(nextSymbol);
	// cout << nextSymbol << endl;
	// cin.clear();

	// A beautiful way to get a line
	cout << "Enter a line of input and I will echo it:\n";
	char symbol;
	do
	{
		cin.get(symbol);
		cout << symbol;
	} while (symbol != '\n');
	cout << "That's all for this demonstration.\n";

	// Outputting a mere character:
	cout.put('a');
	cout << endl;
}
