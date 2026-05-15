#include <iostream>
using namespace std;
int readpositivenumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
void printinvertednumberpattern(int number)
{

    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;

    }
}
int main()
{
    printinvertednumberpattern(readpositivenumber("Please enter a positive number "));
    return 0;
}