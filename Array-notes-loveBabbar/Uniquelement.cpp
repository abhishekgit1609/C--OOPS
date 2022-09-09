#include <iostream>
using namespace std;

int  unique(int arr[], int size)
{
    // int i, j, k;
    // for (i = 0; i < size; i++)  // yeh line elements lete hai one by one
    // {  
    //     int c;
    //     for (j = 0; j < i - 1; j++)   // yeh line previous element ko check karte hai
    //     {
    //         c++;
    //     }

    //     for (k = 0; k < i + 1; k++)    // yeh line age wale elements ko use karte hai
    //     { 
    //         c++;
    //     }

    //     if (c == 0)
    //     {
    //         return arr[i];
    //     }
    // }

    /*
    Using the XOR method which cancels out the duplicate elements in array and the final output is the element left
    */
   int ans=0;

for(int i=0; i<size ; i++){
    ans=ans^arr[i];
}

return ans;
}

int main()
{
    cout << "enter size : " << endl;
    int size;
    cin >> size;

    int arr[1000];

    cout << "enter elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout<< unique(arr, size);
}