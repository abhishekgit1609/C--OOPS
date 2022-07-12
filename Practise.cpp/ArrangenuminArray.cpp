#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    int s=0;
    int e=n-1;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
        {
          
            arr[s] = i;
            s++;
        }

        else
        {
            
            arr[e] = i;
            e--;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int *arr = new int[n];
        arrange(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
    }
}