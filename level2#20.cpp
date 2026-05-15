#include <iostream>
#include<cstdlib>
using namespace std;
enum EnCharType  { SmallLetter = 1 , CapitalLetter = 2 , Digit = 3 , Symbol = 4 };
int RandomNumber(int from, int to)
{
    int RandNum = rand() % ((int)to - (int)from + 1) + (int)from;
    return RandNum;
}
char GetRandomCharacter(EnCharType CharType)
{
    switch (CharType)
    {
    case EnCharType::SmallLetter:
    {
        return char(RandomNumber(97, 122));
        break;
    }
    case EnCharType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case EnCharType::Digit:
    {
        return char(RandomNumber(48, 57));
        break;
    }
    case EnCharType::Symbol:
    {
        return char(RandomNumber(33, 47));
        break;
    }
    }
    return '\0';

}
int main()
{
    srand((unsigned)time(NULL));
    cout << GetRandomCharacter(EnCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(EnCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(EnCharType::Digit) << endl;
    cout << GetRandomCharacter(EnCharType::Symbol) << endl;
    return 0;
}