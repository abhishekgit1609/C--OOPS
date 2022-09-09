#include <iostream>
using namespace std;
#include <climits>

int getmin(int arr[], int size)
{
    
    int minmum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // condition solution
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }

        //Min condition
        minmum = min(minmum , arr[i]);

    }

    // return
    return minmum;
}

int getmax(int arr[], int size)
{

   
    int maxmum = INT_MIN;
    for (int i = 0; i < size; i++)
    {

         // Condition solution
        // if (arr[i] > max)
        // {
        //     max=arr[i];
        // }

        // Max function
        maxmum = max(maxmum, arr[i]);
    }

    // Return max
    return maxmum;
}

int main()
{

    // size of array
    cout << "Enter size of  array : ";
    int size;
    cin >> size;

    // Wrong practise
    //   int arr[size];

    // Good Practise
    int arr[1000];

    // input of array elements
    cout << "Enter elements in array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    getmax(arr, size);
    getmin(arr, size);

    cout << "Max num: " << getmax(arr, size);

    cout << "Min num: " << getmin(arr, size);
}