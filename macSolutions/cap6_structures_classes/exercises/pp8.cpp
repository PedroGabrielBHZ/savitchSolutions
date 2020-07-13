#include <iostream>
using namespace std;

class Money {

private:
	int dollars;
	int cents;
public:
	void readMoney();
	void setMoney();
	double returnMoneyAsDouble();
};

void Money::readMoney() {
	cout << "$" << dollars << "." << cents << endl;
}

void Money::setMoney() {
	cout << "Enter amount of dollars: ";
	cin >> dollars;
	cout << "Enter amount of cents: ";
	cin >> cents;
}

double Money::returnMoneyAsDouble() {
	double dCents = cents;
	double dDollars = dollars;
	dCents /= 100;
	return dDollars + dCents;
}

int main() {
	Money Ben;
	Ben.setMoney();
	Ben.readMoney();
	cout << Ben.returnMoneyAsDouble() << endl;
}
