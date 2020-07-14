#include <iostream>
using namespace std;

class Fraction {

private:
	int numerator;
	int denominator;
public:
	void setFraction(int set_numerator, int set_denominator);
	double calculateValue();
	void showReducedForm();
};

void Fraction::setFraction(int set_numerator, int set_denominator) {

	numerator = set_numerator;
	denominator = set_denominator;

}

double Fraction::calculateValue() {

	double n = numerator;
	double d = denominator;
	return n/d;

}

int gcd(int a, int b) {

	int temp;
	if (a<b) {temp=a;a=b;b=temp;}
	if (a-b < 0) return -1;
	if (a-b == 0) return b;
	return gcd(b, a-b);
}

void Fraction::showReducedForm() {

	int gcd_res = gcd(numerator, denominator);
	if (gcd_res == -1) cout << "Relative primes. Irreducible.";
	else {
		cout << numerator/gcd_res << "/"
		     << denominator/gcd_res << endl;
	}
}

int main() {

	Fraction Euclid;
	Euclid.setFraction(1236424, 36);
	Euclid.showReducedForm();
}
