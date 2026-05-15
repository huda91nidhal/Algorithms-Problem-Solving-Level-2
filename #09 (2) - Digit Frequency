#include <iostream>
using namespace std;
float readpositivenumber(string message)
{
	int number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
float countdigitfrequency(short digittocheck, int number)
{
	int remainder = 0, freqcounter = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		if (digittocheck == remainder)
			freqcounter++;
	}
	return freqcounter;
}
void printalldigitsfrequency(int number)
{
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		short digitfrequency = 0;
		digitfrequency = countdigitfrequency(i, number);
		if (digitfrequency > 0)
		cout << "Digit " << i << " frequency is " << digitfrequency << " time(s)." << endl;
}
}
int main()
{
	int number = readpositivenumber("Please enter a positive number ");
	printalldigitsfrequency(number);
	return 0;
}

