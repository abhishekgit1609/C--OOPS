#include <iostream>
using namespace std;

int bubblesort(int arr[], int size)
{
    for (int roun = 0; roun < size - 1; roun++)     //For rounds
    {
        for (int j = 0; j < size - 1-roun  /* size-1-roun : done so that is doesn't compare last element of array as it is already sorted*/; j++)     //for comparing
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];                  //Swaping
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    cout << "Enter Size of array: ";
    int size;
    cin >> size;

    int arr[size];
    cout << "Enter the Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bubblesort(arr, size);

    cout << "Your sorted array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}