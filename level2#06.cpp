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
int sumofdigit(int number)
{
	int remainder,sum = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		sum = sum + remainder ; 

	}
	return sum;
}
int main()
{
	cout <<endl<< "The sum of the digit = " << sumofdigit(readpositivenumber("Please enter a positive number ")) << endl;
	return 0;
}

