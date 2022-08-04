#include <iostream>
using namespace std;

int selectionsort(int input[], int size)
{
    for (int i = 0; i < size - 1; i++) // this loop is for rounds
    {

        // Find minimum number
        int min = input[i];
        for (int j = 1; j < size; j++)
        {
            if (input[j] < min)
            {
                min = input[j];
            }
        }

        // Swap
        int temp = input[i];
        input[i] = min;
        min = temp;
    }
}

int main()
{
    cout << "Enter size of array: ";
    int size;
    cin >> size;

    int input[size];
    cout << "Enter the unsorted Array: ";
    for (int i = 0; i < size; i++)
        
        { // Array input
            cin >> input[i];
        }

    selectionsort(input, size);
    cout << "your Sorted Array Using Selection Sort: ";
    for (int i = 0; i < size; i++)
    {
        cout << input[i];
    }
}