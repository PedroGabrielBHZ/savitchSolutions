#include <iostream>
using namespace std;

class Rational
{
public:
	// Constructors
	Rational() {numerator=0;denominator=1;}
	Rational(int wholeNumber);
	Rational(int n, int d);

	// Display functions
	void displayAsRatio();

	// Operators
	const Rational operator +(const Rational& rationalB) const;
	const Rational operator -(const Rational& rationalB) const;
	const Rational operator *(const Rational& rationalB) const;
	const Rational operator /(const Rational& rationalB) const;
	bool operator ==(const Rational& rationalB) const;
	bool operator <(const Rational& rationalB) const;
	bool operator >(const Rational& rationalB) const;
	bool operator <=(const Rational& rationalB) const;
	bool operator >=(const Rational& rationalB) const;
	friend ostream& operator <<(ostream& outputStream,
			const Rational& rationalN);
	friend istream& operator >>(istream& inputStream, Rational& rationalN);

private:
	int numerator;
	int denominator;

	// Mutator
	void normalize();

	// Accessor
	int setNumerator(int num) {return num;}
	int setDenominator(int den) {return den;}

	// Toolkit
	int gcd(int a, int b);
};

int Rational::gcd(int a, int b)
{
	if (b>a) {int c = a; a=b; b=c;}
	if (b == 0) return a;
	return gcd(b , a%b);
}

void Rational::normalize()
{
	if (denominator < 0)
	{
		denominator *= -1;
		numerator *= -1;
	}
	
	int greatestCD = gcd(numerator, denominator);
	numerator /= greatestCD;
	denominator /= greatestCD;
}	

Rational::Rational(int wholeNumber)
	: numerator(wholeNumber), denominator(1) {}

Rational::Rational(int n, int d) 
	: numerator(n), denominator(d) {normalize();}

void Rational::displayAsRatio()
{
	cout << numerator << "/" << denominator << endl;
}

const Rational Rational::operator +(const Rational& rationalB) const
{
	int commonDenominator = denominator * rationalB.denominator;
	int commonNumerator = numerator * rationalB.denominator +
			      rationalB.numerator * denominator;
	return Rational(commonNumerator, commonDenominator);
}

const Rational Rational::operator -(const Rational& rationalB) const
{
	int commonDenominator = denominator * rationalB.denominator;
	int commonNumerator = numerator * rationalB.denominator - 
			      rationalB.numerator * denominator;
	return Rational(commonNumerator, commonDenominator);
}

const Rational Rational::operator *(const Rational& rationalB) const
{
	int commonDenominator = denominator * rationalB.denominator;
	int commonNumerator = numerator * rationalB.numerator;

	return Rational(commonNumerator, commonDenominator);
}

const Rational Rational::operator /(const Rational& rationalB) const
{
	int commonDenominator = denominator * rationalB.numerator;
	int commonNumerator = numerator * rationalB.denominator;

	return Rational(commonNumerator, commonDenominator);
}

bool Rational::operator ==(const Rational& rationalB) const
{
	return ((numerator * rationalB.denominator
				==
		denominator * rationalB.numerator));
}

bool Rational::operator <(const Rational& rationalB) const
{
	return ((numerator * rationalB.denominator
				<
		rationalB.numerator * denominator));
}

bool Rational::operator >(const Rational& rationalB) const
{
	return !((numerator * rationalB.denominator
				<
		rationalB.numerator * denominator));
}

bool Rational::operator <=(const Rational& rationalB) const
{
	return (((numerator * rationalB.denominator
				<
		rationalB.numerator * denominator)) ||
		((numerator * rationalB.denominator
				==
		denominator * rationalB.numerator))    );
}

bool Rational::operator >=(const Rational& rationalB) const
{
	return  (   !((numerator * rationalB.denominator
				<
		rationalB.numerator * denominator)) ||
		((numerator * rationalB.denominator
				==
		denominator * rationalB.numerator))    );
}


ostream& operator <<(ostream& outputStream,
			const Rational& rationalN)
{
	outputStream << rationalN.numerator 
		<< "/" << rationalN.denominator;
	return outputStream;
}
		
istream& operator >>(istream& inputStream, Rational& rationalN)
{
	char bar;
	int nume, deno;
	inputStream >> nume;
	inputStream >> bar;
	inputStream >> deno;

	rationalN.numerator = rationalN.setNumerator(nume);
	rationalN.denominator = rationalN.setDenominator(deno);

	return inputStream;
}

int main()
{
	Rational a;
	Rational b(5);
	Rational c(5, 2);

	cout << "a = ";
	a.displayAsRatio();
	cout << "b = ";
        b.displayAsRatio();
	cout << "c = ";
        c.displayAsRatio();

	cout << "d = b + c = ";
	Rational d = b + c;
	d.displayAsRatio();
	
	cout << "e = d - c = ";
	Rational e = d - c;
	e.displayAsRatio();

	cout << "f = b * c = ";
	Rational f = b * c;
	f.displayAsRatio();

	cout << "g = b / c = ";
	Rational g = b / c;
	g.displayAsRatio();

	cout << "d - c == b ? ";
	cout << (e == b) << endl;

	cout << "b > c ? ";
	cout << (b>c) << endl;

	cout << "b < c ? ";
	cout << (b<c) << endl;

	cout << a << endl;

	cin >> a;

	cout << a << endl;

}
