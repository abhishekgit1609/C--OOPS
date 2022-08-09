#include <iostream>
using namespace std;

int insertsort(int arr[], int size)
{
    for (int i = 0; i < size ; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    cout << "enter the size: ";
    int size;
    cin >> size;

    int arr[size];

    cout << "enter the Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertsort(arr, size);

    cout << "your array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}