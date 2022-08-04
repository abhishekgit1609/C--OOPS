#include <iostream>
using namespace std;

int binarySearch(int input[], int size, int val)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (input[mid] == val)
        {
            return mid;
        }
        else if (input[mid] < val)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
	return -1;
}

int main()
{
    int size;
    cin >> size;
    int input[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> input[i];
    }

    int val;
    cin >> val;
    cout << binarySearch(input, size, val) << endl;
}