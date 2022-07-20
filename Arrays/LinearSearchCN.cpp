#include <iostream>
using namespace std;

int LinearSearch(int array[], int N, int x)
{
    for (int i = 0; i < N; i++)
    {
        if (array[i] == x)
        {
            cout << i;
        }
        else
        {
            cout<<"-1";
        }
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int N;
        cin >> N;

        int array[10000];
        for (int i = 0; i < N; i++)
        {
            cin >> array[i];
        }
        int x;
        cin >> x;

        LinearSearch(array, N, x);
        return 0;
    }
}