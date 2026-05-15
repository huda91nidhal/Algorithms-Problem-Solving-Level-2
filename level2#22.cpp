#include <iostream>
using namespace std;
int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
void ReadArray(int arr[], int& arrLength)
{
    cout << "Please enter the number of elements : " << endl;
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [ " << i+1 << " ] :";
        cin>>arr[i];
    }
    cout << endl;
}
int TimeRepeated(int CheckNum, int arrLength, int arr[])
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckNum == arr[i])

            counter++;
    }
    return counter;
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
    int arr[100], arrLength , CheckNum;
    ReadArray(arr, arrLength);
    CheckNum=ReadPositiveNumber("Please enter the number you want to check :");
    cout << "Orginal Array " << endl;
    PrintArray(arrLength, arr);
    cout << "\n Number " << CheckNum;
    cout << " is Repeated ";
    cout<< TimeRepeated(CheckNum,arrLength,arr)<<" time(s)"<<endl;
    return 0;

}