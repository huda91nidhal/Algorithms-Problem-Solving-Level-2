#include <iostream>
#include<cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
	int randomnum = rand() % (To - From + 1) + From;
	return randomnum;
}
int main()
{
	srand((unsigned)time(NULL));

	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	return 0;
}
