#include <iostream>
using namespace std;

class Vector2D
{
public:
	// Constructors
	Vector2D() : x(0), y(0) {}
	Vector2D(int a) : x(a), y(0) {}
	Vector2D(int a, int b) : x(a), y(b) {}

	// Operators
	const int operator *(const Vector2D& vector) const;
	friend ostream& operator <<(ostream& outputStream,
			const Vector2D& vector);
	friend istream& operator >>(istream& inputStream,
			Vector2D& vector);

	//Mutators
	const void setComponents(int thisX, int thisY) {x = thisX; y = thisY;}
private:
	int x;
	int y;
};

int main()
{
	Vector2D a;
	Vector2D z;
	Vector2D b(1);
	Vector2D c(2,3);

	cout << "a : " << a << endl << "b : " << b
		<< endl << "c : " << c << endl;

	cout << "Enter a vector in (x, y) format: ";
	cin >> z;
	cout << z << endl;

	cout << z*c << endl;
}

ostream& operator <<(ostream& outputStream,
		const Vector2D& vector)
{
	outputStream << "(" << vector.x << ", " << vector.y << ")";
	return outputStream;
}


istream& operator >>(istream& inputStream,
		Vector2D& vector)
{
	char parenthesis, comma;
	int thisX, thisY;
	inputStream >> parenthesis;
	inputStream >> thisX; 
	inputStream >> comma;
	inputStream >> thisY; 
	inputStream >> parenthesis;
	
	vector.x = thisX;
	vector.y = thisY;

	return inputStream;
}

const int Vector2D::operator *(const Vector2D& vector) const
{
	return x*vector.x + y*vector.y;
}
