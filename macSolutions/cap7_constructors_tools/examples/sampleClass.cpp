#include <iostream>
using namespace std;

class SampleClass
{
public:
	SampleClass(int parameter1, double parameter2);
	SampleClass();	//Default constructor
	void doStuff();
private:
	int data1;
	double data2;
};

SampleClass::SampleClass(int parameter1, double parameter2) 
	: data1(parameter1), data2(parameter2) {}

SampleClass::SampleClass() :
	data1(0), data2(0) {}

int main() 
{
	cout << "This does quite nothing.\n";
	SampleClass a(1, 2);
	SampleClass b;
	return 0;
}
