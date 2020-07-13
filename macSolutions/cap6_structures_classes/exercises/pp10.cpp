#include <iostream>
using namespace std;

class Temperature {
private:
	double kelvinTemperature;
public:
	void setTempKelvin();
	void setTempCelsius();
	void setTempFahrenheit();
	void showTemperature(char scale);
};

void Temperature::setTempKelvin() {
	cout << "Enter temperature in Kelvins: " << endl;
	cin >> kelvinTemperature;
}

void Temperature::setTempCelsius() {
	cout << "Enter temperature in Celsius: " << endl;
	double celsiusTemperature;
	cin >> celsiusTemperature;
	kelvinTemperature = celsiusTemperature + 273.15;
}

void Temperature::setTempFahrenheit() {
	cout << "Enter temperature in Fahrenheit: " << endl;
	double fahrenheitTemperature;
	cin >> fahrenheitTemperature;
	kelvinTemperature = (5. / 9.) * (fahrenheitTemperature - 32) + 273.15;
}

void Temperature::showTemperature(char scale) {
	if (scale == 'k') {
		cout << kelvinTemperature << " K\n";
	}
	if (scale == 'c') {
		cout << kelvinTemperature - 273.15 << endl;
	}
	else {
		cout << (kelvinTemperature - 273.15) * 
			(9./5.) + 32 << endl;
	}
}

int main() {
	Temperature Lord;
	Lord.setTempKelvin();
	Lord.showTemperature('c');
}
