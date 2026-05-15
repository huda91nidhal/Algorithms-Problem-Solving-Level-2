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
float countdigitfrequency(short digittocheck , int number)
{
	int remainder = 0 , freqcounter=0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		if (digittocheck == remainder)
			freqcounter ++ ;
	}
	return freqcounter;
}
int main()
{
	int number = readpositivenumber("Please enter a positive number ");
	short digittocheck= readpositivenumber("Please enter one digit to check ");
	cout <<"\n digit "<< digittocheck<< " frequency is " << countdigitfrequency(digittocheck,number) << " time(s)" << endl;
	return 0;
}

