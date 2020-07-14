#include <iostream>
using namespace std;

class HotDogStand
{
private:
	int standID;
	int soldToday;
	static int totalSold;
public:
	HotDogStand();
	HotDogStand(int thisStandID, int thisStandSold);
	void justSold() {soldToday++;totalSold++;}
	int getTotalSold() {return totalSold;}
};

int HotDogStand::totalSold = 0;

HotDogStand::HotDogStand() : standID(0), soldToday(0) {}

HotDogStand::HotDogStand(int thisStandID, int thisStandSold) 
	: standID(thisStandID), soldToday(thisStandSold) 
{totalSold += thisStandSold;}

int main()
{
	HotDogStand a(1, 1), b(2, 2), c(3, 3);
	cout <<	a.getTotalSold() << endl;
}
