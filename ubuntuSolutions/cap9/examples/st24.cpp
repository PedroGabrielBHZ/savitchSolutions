#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2("Hello");
	cout << "Enter a line of input:\n";
	cin >> s1;
	if (s1 == s2)
	{
		cout << "Equal\n";
	} else cout << "Not equal\n";

	s1 = s2;
	s2[0] = 'J';
	cout << s1 << " " << s2 << endl;
}
