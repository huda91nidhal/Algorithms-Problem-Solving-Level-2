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
float GetFractionsPart(float Number)
{
    return Number - (int)Number;
}
float MyRound(float Number)
{
    int IntPart;
    IntPart = int(Number);
    float FractionPart = GetFractionsPart(Number);
    if (abs(FractionPart) >= .5)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else return IntPart;
    
}
int main()
{
    float Number = 0;
    Number = ReadNumber();
    cout << "\n My Round Results : " << MyRound(Number) << endl;
    cout << "\n C++ Round Results : " << round(Number) << endl;

}