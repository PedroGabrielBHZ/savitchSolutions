#include <iostream>
using namespace std;

class PrimeNumber
{
public:
	PrimeNumber() : thePrime(1) {}
	PrimeNumber(int a) : thePrime(a) {}
	PrimeNumber operator ++(int);
	int getPrime() {return thePrime;}
private:
	int thePrime;
};

int stub(int thePrime);

int main()
{
	PrimeNumber a(23231412);
	cout << a.getPrime() << endl;
	a++;
	cout << a.getPrime() << endl;

}

PrimeNumber PrimeNumber::operator++(int ignoreMe)
{
	bool foundNext = false;
	while (!foundNext)
	{
		thePrime++;
		bool isPrime = true;
		for (int i=2;i<thePrime;i++)
		{
			if (thePrime%i == 0)
			{
				isPrime = false;
			}
		}
		if (isPrime) {foundNext = true;}
	}
	return PrimeNumber(thePrime);
}

int stub(int thePrime)
{
	bool foundNext = false;
	while (!foundNext)
	{
		thePrime++;
		bool isPrime = true;
		for (int i=2;i<thePrime;i++)
		{
			if (thePrime%i == 0)
			{
				isPrime = false;
			}
		}
		if (isPrime) {foundNext = true;}
	}
	return thePrime;
}
