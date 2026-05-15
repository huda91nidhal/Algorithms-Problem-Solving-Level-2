#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "\nPlease enter a number? ";
    cin >> Number;
    return Number;
}
void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}
void InputUserNumberInArray(int arr[100], int& arrLength)
{
    bool AddMore = true;
    do
    {
        AddArrayElement(ReadNumber(), arr, arrLength);
        cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
        cin >> AddMore;
    } while (AddMore);
}
void PrintStringArrays(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[100];
    int arrLength = 0;
    InputUserNumberInArray(arr, arrLength);
    cout << "\nArray Length:" << arrLength;
    cout << "\nArray Elements : ";
    PrintStringArrays(arr, arrLength);
    return 0;
}