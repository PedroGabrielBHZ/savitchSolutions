#include <iostream>
using namespace std;

class Point {

private:
	int x;
	int y;
public:
	void setPoint(int x, int y);
	void movePoint(int x_amount, int y_amount);
	void rotate90clockwise();
	const void printPoint();

};

void Point::setPoint(int set_x, int set_y) {
	x = set_x;
	y = set_y;
}

void Point::movePoint(int x_amount, int y_amount) {
	x += x_amount;
	y += y_amount;
}

void Point::rotate90clockwise() {
	if (x >= 0 && y >= 0) {
		y = -y;
	}
	else if (x >= 0 && y < 0) {
		x = -x;
	}
	else if (x <= 0 && y <= 0) {
		y = -y;
	}
	else if (x <=0 && y > 0) {
		x = -x;
	}
}

const void Point::printPoint() {
	cout << x << "," << y << endl;
}

int main()
{
	Point rne;

	rne.setPoint(-3, 2);

	rne.rotate90clockwise();

	rne.printPoint();
}
