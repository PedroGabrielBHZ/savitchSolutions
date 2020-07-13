#include <iostream>
using namespace std;

class Percent
{
public:
	friend bool operator ==(const Percent& first,
			        const Percent& second);
	friend bool operator <(const Percent& fist,
			       const Percent& second);
	Percent() {}
	friend istream& operator >>(istream& inputStream,
				Percent& aPercent);
	friend ostream& operator <<(ostream& outputStream,
				const Percent& aPercent);
private:
	int value;
};

istream& operator >>(istream& inputStream,
		Percent& aPercent)
{
	inputStream >> aPercent.value;
	return inputStream;
}

ostream& operator <<(ostream& outputStream, 
		const Percent& aPercent)
{
	outputStream << aPercent.value;
	outputStream << '%';
	return outputStream;
}

int main()
{
	Percent a;
	cout << "Enter a percentage: ";
	cin >> a;
	cout << a << endl;
}
