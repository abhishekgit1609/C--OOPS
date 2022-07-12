#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int i, j, k;
    for (int i = 0; i < size; i++)
    {
        int c = 0;
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
            }
        }

        for (int k = i + 1; k < size; k++)
        {
            if (arr[i] == arr[k])
            {
                c++;
            }
        }
        if (c == 0)
        {
            return  arr[i];
        }
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}