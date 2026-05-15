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
void printdigit(int number)
{
	int remainder = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		cout << remainder << endl;
	}
}
int main()
{
	printdigit(readpositivenumber("Please enter a positive number "));
	return 0;
}

