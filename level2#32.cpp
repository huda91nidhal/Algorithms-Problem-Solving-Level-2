#include <iostream>   
#include<cstdlib>
using namespace std;
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
        arr[i] = RandomNumber(1,100);
    }
}
void CopyArrayInReverceOrder(int arrSource[100],int arrDestination[100] , int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arrDestination[i]= arrSource[arrLength-1-i];
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
    int arr[100];
    int arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);
    cout << "\n Array 1 Elements : \n ";
    PrintArray(arr, arrLength);
    int arr2[100];
    CopyArrayInReverceOrder(arr , arr2 , arrLength);
    cout << "\n Array 2 after copying Array 1 in reverse order : \n ";
    PrintArray(arr2, arrLength);
    return 0;
}