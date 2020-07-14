#include <iostream>
using namespace std;

class Month 
{
private:
	int month;
public:
	Month(char l1, char l2, char l3);
	Month(int month_code);
	Month();
	void inputMonthCode(int month_code);
	void inputMonthInitials(char l1, char l2, char l3);
	void outputMonthCode() {cout << month << endl;}
	void outputMonthInitials() {cout << "F.Y.S!\n";}
	Month nextMonth() {return Month(month+1);}
};

Month::Month(char l1, char l2, char l3)
{
	if (l1=='j' && l2=='a' && l3=='n') month=1;
	if (l1=='f' && l2=='e' && l3=='b') month=2;
	if (l1=='m' && l2=='a' && l3=='r') month=3;
	if (l1=='a' && l2=='p' && l3=='r') month=4;
	if (l1=='m' && l2=='a' && l3=='y') month=5;
	if (l1=='j' && l2=='u' && l3=='n') month=6;
	if (l1=='j' && l2=='u' && l3=='l') month=7;
	if (l1=='a' && l2=='u' && l3=='g') month=8;
	if (l1=='s' && l2=='e' && l3=='p') month=9;
	if (l1=='o' && l2=='c' && l3=='t') month=10;
	if (l1=='n' && l2=='o' && l3=='v') month=11;
	if (l1=='d' && l2=='e' && l3=='c') month=12;
}

Month::Month(int month_code) : month(month_code) {}

Month::Month() : month(1) {}

void Month::inputMonthCode(int month_code)
{
	month = month_code;
}

void Month::inputMonthInitials(char l1, char l2, char l3)
{
	if (l1=='j' && l2=='a' && l3=='n') month=1;
	if (l1=='f' && l2=='e' && l3=='b') month=2;
	if (l1=='m' && l2=='a' && l3=='r') month=3;
	if (l1=='a' && l2=='p' && l3=='r') month=4;
	if (l1=='m' && l2=='a' && l3=='y') month=5;
	if (l1=='j' && l2=='u' && l3=='n') month=6;
	if (l1=='j' && l2=='u' && l3=='l') month=7;
	if (l1=='a' && l2=='u' && l3=='g') month=8;
	if (l1=='s' && l2=='e' && l3=='p') month=9;
	if (l1=='o' && l2=='c' && l3=='t') month=10;
	if (l1=='n' && l2=='o' && l3=='v') month=11;
	if (l1=='d' && l2=='e' && l3=='c') month=12;
}

int main()
{
	Month nst('d','e','c');
	nst.outputMonthInitials();
	nst.outputMonthCode();
	Month nxtM;
	nxtM = nst.nextMonth();
	nxtM.outputMonthCode();
}


