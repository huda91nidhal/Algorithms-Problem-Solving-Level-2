#include <iostream>
using namespace std;
void FillArray(int arr[100], int& arrLength)
{
    arrLength = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;


}
bool ispalindromenumber(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)

        if (!(arr[i] == arr[arrLength - i - 1]))
        {
            return false;
        }
    return true;

}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[100], arrLength = 0;
    FillArray(arr, arrLength);
    cout << "\n Array Elements : \n";
    PrintArray(arr, arrLength);
    if (ispalindromenumber(arr, arrLength))
        cout << "\n yes , The number is palindrome number \n ";
    else
        cout << "\n no , The number is not palindrome number \n ";
    return 0;
}// problem 41