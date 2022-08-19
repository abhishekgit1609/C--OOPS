#include <iostream>
using namespace std;

int mergearray(int arr1[], int arr2[], int arr3[], int size1, int size2)
{
        int i = 0, j = 0, k = 0;
        while (i < size1 && j < size2)
        {
            if (arr1[i] < arr2[j])
            {
                arr3[k] = arr1[i];
                k++;
                i++;
            }
            else
            {
                arr3[k] = arr2[j];
                k++;
                j++;
            }
        }

        while(i<size1){
            arr3[k]=arr1[i];
            i++;
            k++;
        }

        while(j<size2){
            arr3[k]=arr2[j];
            j++;
            k++;
        }


}
int main()
{
    // cout << "enter size of array1: " << endl;
    int size1;
    cin >> size1;

    int arr1[size1];
    // cout << "ebter sorted array1 :" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    // cout << "enter size of array2: " << endl;
    int size2;
    cin >> size2;
    // cout << "ebter sorted array2 :" << endl;
    int arr2[size2];

    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    int arr3[size1 + size2];

    mergearray(arr1, arr2, arr3, size1, size2);

    for (int i = 0; i < size1 + size2; i++)
    {
        cout << arr3[i] << " ";
    }
}