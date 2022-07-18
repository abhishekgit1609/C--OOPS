#include <iostream>
using namespace std;

void pairSum(int *input, int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {
            if ((input[i] + input[j]) == x)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        int x;

        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cin >> x;

        pairSum(input, size, x);

        delete[] input;
    }
}