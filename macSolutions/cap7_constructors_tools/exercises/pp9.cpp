#include <iostream>
#include <string>
using namespace std;

class ZipCode
{
private:
	int zipCode[5];
public:
	ZipCode(int zipCodeAsInt) : zipCode(zipCodeAsInt) {}
	ZipCode(string zipCodeAsBin);
	void displayZip();
	int process5uple(string five_uple);
	int zipAsInt(string zipAsString);
	string zipAsBin();
};

ZipCode::ZipCode(string zipAsString) 
{
	zipCode = zipAsInt(zipAsString);
}

void ZipCode::displayZip() 
{
	cout << zipCode << endl;
}

int ZipCode::process5uple(string five_uple)
{
	int values[] = {7, 4, 2, 1, 0};
	int digit = 0;
	for (int i = 0; i < 5; i++)
	{
		digit += values[i] * (static_cast<int>(five_uple[i])-48);
	}
	return digit;
}

int* ZipCode::zipAsInt(string zipAsString)
{
	bool done_processing = false;
	int pos = 0;
	int zipPos = 0;
	int zipAsInt[] = {0, 0, 0, 0, 0};
	while (!done_processing)
	{
		string temp = "00000";
		int j = 0;
		for (int i = pos; i < pos + 5; i++)
		{
			temp[j] = zipAsString[i];
			j++;
		}
		cout << "Processing " << temp << endl;
		int digit = process5uple(temp);
		zipAsInt[zipPos] = digit;
		cout << temp << " processed. ";
		cout << "Digit found = " << digit << endl;
		if (zipPos == 4) 
		{
			done_processing = true;
		}
		pos += 5;
		zipPos++;
	}
	return zipAsInt;
}

int main()
{
	ZipCode zip("110100101000101011000010011");
	zip.displayZip();
}


