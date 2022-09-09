#include <iostream>
using namespace std;


int printarray(int arr[], int size){
    for(int i=0 ; i<size ;i++){
        cout<<arr[i]<<" ";
    }
}
int  swap(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {

        swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    cout << "enter size : " << endl;
    int size;
    cin >> size;

    int arr[1000];

    cout << "enter elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

     swap(arr, size);
     printarray(arr,size);
}