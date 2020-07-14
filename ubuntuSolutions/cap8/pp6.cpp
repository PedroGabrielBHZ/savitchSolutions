#include <iostream>
using namespace std;

class MyInteger
{
public:
	MyInteger() : myInt(0) {}
	MyInteger(int a) : myInt(a) {}

	void setValue(int a) {myInt = a;}
	int getValue() {return myInt;}

	int operator[](int index);
private: 
	int myInt;
};

int myPow(int x, int p)
{
	if (p == 0) return 1;
	if (p == 1) return x;
	return x * myPow(x, p-1);
}

int MyInteger::operator[](int index)
{
	int modulus = myPow(10, index+1);
	int step1 = myInt % modulus;
	int step2 = step1 - step1 % myPow(10, index);
	int step3 = step2 / myPow(10, index);
	return step3;
}

int main()
{
	MyInteger a(12345);
	cout << a[3] << endl;
}
