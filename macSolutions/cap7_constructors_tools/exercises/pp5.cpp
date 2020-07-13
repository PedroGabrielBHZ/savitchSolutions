#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int kingdoms;

	cout << "How many kingdoms are there?\n";
	cin >> kingdoms;

	vector<int> suitors;

	for (int i=0;i<kingdoms;i++)
	{
		suitors.push_back(i+1);
	}

	int i = 0;

	while (suitors.size() > 1)
	{
		i = i+2;
		if (i > suitors.size())
		{
			i %= suitors.size();
		}
		if (i == suitors.size())
		{
			suitors.erase(suitors.begin() + i - 1);
		} else 
		{
			suitors.erase(suitors.begin() + i);
		}
	}
	cout << suitors[0] << endl;
}
