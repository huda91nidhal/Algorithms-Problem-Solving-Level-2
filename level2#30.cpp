#include <iostream>   
using namespace std;
int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayWithRandomNumbers(int arr1[100] , int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr1[i] = RandomNumber(1, 100);
    }
}
void SumOfTwoArray(int arr1[100], int arr2[100] , int arrSum[100] , int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arrSum[i] = arr1[i] + arr2[i];
    }
}
void PrintArray(int arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    srand((unsigned)time(NULL));
    int arr1[100], arr2[100] , arrSum[100];
    int arrLength;
    arrLength=ReadPositiveNumber("Enter number of elements:");
    FillArrayWithRandomNumbers(arr1, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);
    SumOfTwoArray(arr1, arr2, arrSum, arrLength);
    cout << "\n Array 1 Elements: \n ";
    PrintArray(arr1, arrLength);
    cout << "\n Array 2 Elements: \n ";
    PrintArray(arr2, arrLength);
    cout << "\n Sum of Array 1 elements and Array 2 elements is : \n ";
    PrintArray(arrSum, arrLength);
    return 0;
}