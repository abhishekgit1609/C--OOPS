#include <iostream>
#include <climits>  
using namespace std;

int main()
{
    int size;
    cin >> size;
    int array[100]; // Never do array[n] . we always need to input any constant value in it .
    // input
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    // output
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    // largst of the element ;

    int max = INT_MIN;    //minimum value that can be entered -2**31;
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout<<"max: "<<max<<endl;



    return 0;
}