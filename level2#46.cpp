#include <iostream>
#include <cmath>
using namespace std;
float ReadNumber()
{
    float Number;


    cout << "Please enter a number? ";
    cin >> Number;

    return Number;
}
float AyABS(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1;
}
int main()
{
    float Number = 0;
    Number = ReadNumber();
    cout << "\n My Abs Results : " << AyABS(Number) << endl;
    cout << "\n C++ Abs Results : " << abs(Number) << endl;

}