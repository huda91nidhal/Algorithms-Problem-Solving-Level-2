#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to common functions.

// Function: FillArray
// Purpose: Initializes the source array with predefined numbers, some of which are duplicates.
// Parameters:
//   - arr: The source array to be filled (with capacity of 100).
//   - arrLength: A reference variable to store the number of elements filled in the array.
void FillArray(int arr[100], int& arrLength)
{
    arrLength = 10;  // Set the array length to 10 elements.

    // Manually assign values to the array elements.
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";  
    cout << "\n"; 
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i; 
    }
    return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;  
    arr[arrLength - 1] = Number;  
}
void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
        {
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
    }
}
int main()
{
    int arrSource[100], SourceLength = 0, arrDestination[100], DestinationLength = 0;
    FillArray(arrSource, SourceLength);
    cout << "\n Array Elements : \n ";
    PrintArray(arrSource, SourceLength);
    CopyDistinctNumbersToArray(arrSource, arrDestination, SourceLength, DestinationLength);
    cout << "\n Array 2 Distinct Elements : \n ";
    PrintArray(arrDestination, DestinationLength);
    return 0;
}