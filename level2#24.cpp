#include <iostream>
#include <cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}
void FillArrayWithRandomNumbers(int& arrLength, int arr[])
{
    cout << "please enter number of element :" << endl;
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}
int MaxNumberInArray(int arrLength , int arr[100])
{
    int Max = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}
void PrintArray(int arrLength, int arr[])
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength;
    FillArrayWithRandomNumbers(arrLength, arr);
    cout << "\nArray Elements: ";
    PrintArray(arrLength, arr);
    cout << "\nMax Number is : ";
    cout << MaxNumberInArray(arrLength,arr) << endl;
    return 0;

}