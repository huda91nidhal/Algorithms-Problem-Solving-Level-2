#include <iostream>   
#include <cstdlib>    
#include <ctime>     
using namespace std;
enum EnCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
int ReadPositiveNumbers(string message)
{
    int number;
    cout << message << endl;
    cin >> number;
    return number;
}
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
char GetRandomCharacter(EnCharType CharType)
{
    switch (CharType)
    {
    case (EnCharType::SmallLetter):
        {
            return char(RandomNumber(97,122));
            break;
        }
    case (EnCharType::CapitalLetter):
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case (EnCharType::SpecialCharacter):
    {
        return char(RandomNumber(33, 47));
        break;
    }
    case (EnCharType::Digit):
    {
        return char(RandomNumber(48, 54));
        break;
    }
    }
    return '\0';

}
string GenerateWord(EnCharType CharType, short Length)
{
    string word;
    for (int i = 1; i <= Length; i++)
    {
        word = word + GetRandomCharacter(CharType);
    }
    return word;
}
string GenerateKey()
{
    string Key = " ";
    Key = GenerateWord(EnCharType::CapitalLetter, 4) + " - ";
    Key = Key + GenerateWord(EnCharType::CapitalLetter, 4) + " - ";
    Key = Key + GenerateWord(EnCharType::CapitalLetter, 4) + " - ";
    Key = Key + GenerateWord(EnCharType::CapitalLetter, 4) ;
    return Key;
}
void GenerateKeys(short NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [ " << i << " ] : ";
        cout << GenerateKey()<<endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    GenerateKeys(ReadPositiveNumbers("please enter a number "));
    return 0;
}