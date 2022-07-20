#include <iostream>
using namespace std;

int duplicate(int *arr, int n)
{
    int i, j, k;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
            }
        }
        for (int k = i + 1; k < n; k++)
        {
            if (arr[i] == arr[k])
            {
                c++;
            }
        }
        if (c != 0)
        {
            return arr[i];
        }
    }
}
int main()
{
    int t;
    cin>>t ;
    for(int i=0; i<t; i++){

    
    int n;
    cin >> n;
    int arr[10000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int output = duplicate(arr, n);
    cout<<output;
    }
}