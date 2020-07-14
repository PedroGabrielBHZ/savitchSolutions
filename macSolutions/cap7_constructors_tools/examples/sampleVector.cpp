#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> v;
	cout << "Enter numbers at your will,"
		<< " but enter a negative number to halt.\n";
	int input;
	cin >> input;
	while (input > 0)
	{
		v.push_back(input);
		cout << input << " added.\n";
		cin >> input;
	}
	cout << "Number of inputs: " << v.size() << endl;
	double average;
	for (int i=0;i<v.size();i++) average += v[i];
	average /= v.size();
	cout << "Current vector capacity: " << v.capacity() << endl;
	cout << "Average of the inputs: " << average << endl;
}
