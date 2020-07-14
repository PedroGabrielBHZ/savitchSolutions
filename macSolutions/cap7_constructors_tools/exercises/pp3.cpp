#include <iostream>
using namespace std;

class Counter 
{
private:
	double counter;
	double limit;
public:
	Counter(int counterValue, int counterLimit);
	void addCent() {counter+=0.01;}
	void addDime() {counter+=0.1;}
	void addDollar() {counter+=1;}
	void addTenDollars() {counter+=10;}
	void checkOverflow();
	void startCounter();
};

Counter::Counter(int counterValue, int counterLimit) 
	: counter(counterValue), limit(counterLimit) {};

void Counter::checkOverflow() 
{
	if (counter > limit)
	{
		cout << "Overflow!\n";
		counter = 0;
	}
}

void Counter::startCounter()
{
	cout << "Counter initialized.\n"
		<< "Press a to add a cent.\n"
		<< "Press s to add a dime.\n"
		<< "Press d to add a dollar.\n"
		<< "Press f to add ten dollars.\n"
		<< "Press x to finish execution.\n";
	char input;
	cin >> input;
	while (input != 'x')
	{
		if (		input != 'a' && 
				input != 's' &&
				input != 'd' &&
				input != 'f')
		{cout << "Invalid output\n";}
		if (input == 'a') addCent();
		if (input == 's') addDime();
		if (input == 'd') addDollar();
		if (input == 'f') addTenDollars();

		checkOverflow();
		cout << "Counter @ $" << counter << endl;
		cin >> input;
	}
	cout << "Execution finished. See you later, Dorothy.\n";
}

int main()
{
	Counter dorothy(0, 100);
	dorothy.startCounter();
}
