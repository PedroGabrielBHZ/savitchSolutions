#include <iostream>
using namespace std;

class Complex
{
public:
	// Constructors
	Complex() {a=0;b=0;}
	Complex(double thisA) : a(thisA), b(0) {}
	Complex(double thisA, double thisB) : a(thisA),
		b(thisB) {}
	
	// Display functions
	void displayNumber();

	// Operators -- cR = complex to the right of operator
	const Complex operator +(const Complex& cR) const;
	const Complex operator -(const Complex& cR) const;
	const Complex operator *(const Complex& cR) const;
	const Complex operator /(const Complex& cR) const;

	//Toolkit
	const double getNorm();

private:
	double a; // Real part
	double b; // Imaginary part
};

int main()
{
	Complex a(6, 3);
	cout << "a = "; a.displayNumber();

	Complex b(7, 5);
	cout << "b = "; b.displayNumber();

	Complex c = a+b;
	cout << "c : a+b = "; c.displayNumber();

	Complex d = a-b;
	cout << "d : a-b = "; d.displayNumber();

	Complex e = a*b;
	cout << "e : a*b = "; e.displayNumber();
	
	Complex f = a/b;
	cout << "f : a/b = "; f.displayNumber();
}

const double Complex::getNorm()
{
	return (a*a + b*b);
}

void Complex::displayNumber()
{
	cout << a << " + " << b << "*i" << endl;
}

const Complex Complex::operator +(const Complex& cR) const
{
	double commonReal = a + cR.a;
	double commonImg = b + cR.b;
	return Complex(commonReal, commonImg);
}

const Complex Complex::operator -(const Complex& cR) const
{
	double commonReal = a - cR.a;
	double commonImg = b - cR.b;
	return Complex(commonReal, commonImg);
}

const Complex Complex::operator *(const Complex& cR) const
{
	double commonReal = (a * cR.a - b * cR.b);
	double commonImg = (a * cR.b + b * cR.a);
	return Complex(commonReal, commonImg);
}

const Complex Complex::operator /(const Complex& cR) const //Somethin's wrong!
{
	Complex conjugate = (a, -b);
	Complex numerator((a * conjugate.a - b * conjugate.b),
			  (a * conjugate.b + b * conjugate.a));
	double realP = numerator.a / conjugate.getNorm();
	double imagP = numerator.b / conjugate.getNorm();
	return Complex(realP, imagP);
}
