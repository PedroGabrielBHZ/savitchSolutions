#include <iostream>
using namespace std;

class CounterType {

private:
	int counter;
public:
	void setCounter(int count);
	void increaseByOne();
	void decreaseByOne();
	void printCounter();
	int getCounter();
	
};

void CounterType::setCounter(int count) {
	if (count < 0){cout << "Counter must be >= 0."; return;}
	else counter = count;
}

void CounterType::increaseByOne() {
	counter++;
}

void CounterType::decreaseByOne() {
	if (counter == 0){cout << "Counter @ min."; return;}
	else counter++;
}

void CounterType::printCounter() {
	cout << counter << endl;
}

int CounterType::getCounter() {
	return counter;
}

int main() {

	CounterType James;
	James.setCounter(0);
	James.printCounter();
	James.increaseByOne();
	James.printCounter();
	return 0;
}
