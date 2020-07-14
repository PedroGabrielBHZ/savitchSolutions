#include <iostream>
using namespace std;

class Odometer {

private:
	double fuel;
	double distance;
	double efficiency;
public:
	double getEfficiency();
	void addTrip(double fuelUsed, double distanceTraveled);
	void resetOdometer();
};

double Odometer::getEfficiency() {
	efficiency = distance / fuel;
	return efficiency;
}

void Odometer::addTrip(double fuelUsed, double distanceTraveled) {
	fuel += fuelUsed;
	distance += distanceTraveled;
}

void Odometer::resetOdometer() {
	fuel = 0;
	distance = 0;
}

int main() {
	Odometer John;
	John.resetOdometer();
	John.addTrip(50, 780);
	cout << John.getEfficiency();
}
