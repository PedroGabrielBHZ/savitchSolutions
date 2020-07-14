#include <iostream>
using namespace std;

class Pizza {

private:
	char type[30];
	char size;
	int pepToppings;
	int cheeseToppings;
public:
	void makePizza();
	void outputDescription();
	double computePrice();
};

void  Pizza::makePizza() {
	cin >> type;
	cin >> size;
	cin >> pepToppings;
	cin >> cheeseToppings;
}

double Pizza::computePrice() {
	double price = 0;
	if (size=='s') {
		price = 10 + 2*pepToppings + 2*cheeseToppings;
	}
	if (size=='m'){
		price = 14 + 2*pepToppings + 2*cheeseToppings;
	}
	else {
		price = 17 + 2*pepToppings + 2*cheeseToppings;
	}
	return price;
}

void Pizza::outputDescription() {
	cout<<"You see a "<<type<< " pizza.\n";
	cout<<"It is quite "<<size<<".\n";
	cout<<"This nice pizza will cost you $"<<computePrice()<<endl;
}

int main() {
	Pizza Douggie;
	Douggie.makePizza();
	Douggie.outputDescription();
}
