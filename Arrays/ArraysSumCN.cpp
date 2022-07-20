#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int array[100];
    for (int i = 0; i < N; i++)
    {
    
        cin >> array[i];
    }
    int sum=0;
    for (int i = 0; i < N; i++)
    {
        int k;
        k = array[i];
        sum = sum + k;
       
    }
    cout << sum << endl;

    return 0;
}