#include <iostream>   
#include<cstdlib>
using namespace std;
int ReadNumber()
{
    int number;
    cout << "Please Enter A Number To Search For : ";
    cin >> number;
    return number;
}
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "please enter the element : " << endl;
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}
short FindNumberPositionInArray(int arr[100], int arrLength , int Number)
{
    for ( int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;

    }
            return -1;
}
void PrintArray(int arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
        cout <<arr[i] << " ";
    cout << "\n";
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);
    cout <<endl<<"Array 1 Elements : "<<endl;
    PrintArray(arr, arrLength);
    int Number = ReadNumber();
    cout << "\n Number You Are Looking For Is : " << Number << endl;
    short NumberPosition = FindNumberPositionInArray(arr, arrLength, Number);
    if (NumberPosition == -1)
        cout << "\n The Numer Is Not Found :( " << endl;
    else
    {
        cout << "\n The Number Found At Position : " << NumberPosition << endl;
        cout << "\n The Number Found It's Order : " << NumberPosition + 1 << endl;
    }
    return 0;
}