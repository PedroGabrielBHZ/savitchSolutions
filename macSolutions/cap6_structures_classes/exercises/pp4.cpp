#include <iostream>
using namespace std;

class GasPump {

private:
	float pricePerLiter;
	float dispensedVolume;
	void resetPump() {
       		dispensedVolume = 0;
       		pricePerLiter = 1.48;
	}
	void calculateBill(char operation) {
		if (operation == 'v') 
		{
			cout << "That would be $"
			     << dispensedVolume * pricePerLiter 
			     <<" miss/mister\n";
		}
		else {
			cout << "That would be "
			     << dispensedVolume 
			     <<" liters miss/mister\n";
		}
	}

public:
	void dispenseByVolume(float volume);
	void dispenseByPrice(float price);
};

void GasPump::dispenseByVolume(float volume) {
	resetPump();
	dispensedVolume = volume;
	calculateBill('v');
}

void GasPump::dispenseByPrice(float price) {
	resetPump();
	dispensedVolume = price / pricePerLiter;
       	calculateBill('p');
}

int main() {
	GasPump pump;
	pump.dispenseByVolume(50);
	pump.dispenseByPrice(150);
}
