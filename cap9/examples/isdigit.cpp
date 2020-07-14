#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	cout << "Enter a line of input:\n";
	char next;
	do
	{
		cin.get(next);
		if (!isupper(next))
		{
			cout << next;
		}
	} while (next != '\n');
	cout << "<END OF OUTPUT";
}
