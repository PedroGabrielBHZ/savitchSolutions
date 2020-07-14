#include <iostream>
using namespace std;

class Money {

private:
	double amount;
public:
	void readMoney();
	void setMoney();
	double returnMoneyAsDouble();
};

void Money::readMoney() {
	cout << "$" << amount << endl;
}

void Money::setMoney() {
	cout << "Enter total amount: $";
	cin >> amount;
}

double Money::returnMoneyAsDouble() {
	return amount;
}

int main() {
	Money Ben;
	Ben.setMoney();
	Ben.readMoney();
	cout << Ben.returnMoneyAsDouble() << endl;
}
