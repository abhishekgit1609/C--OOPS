#include <iostream>
using namespace std;
#include <climits>
void intersection(int *arr1, int *arr2, int size1, int size2)
{
    int n, m;
    if (size1 >= size2)
    {
        n = size1;
        m = size2;
    }
    else
    {
        m = size1;
        n = size2;
    }

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                arr1[i] = INT_MIN;
                arr2[i] = INT_MAX;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int size1;
        cin >> size1;
        int arr1[1000];
        for (int i = 0; i < size1; i++)
        {
            cin >> arr1[i];
        }
        int size2;
        cin >> size2;
        int arr2[1000];
        for (int i = 0; i < size2; i++)
        {
            cin >> arr2[i];
        }

        intersection(arr1, arr2, size1, size2);
    }
}