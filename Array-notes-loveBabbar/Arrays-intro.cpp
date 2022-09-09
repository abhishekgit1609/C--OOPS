#include <iostream>
using namespace std;

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
int main()
{

    // Declaration
    int number[15];

    // cout << "number at 3: " << number[4] << endl;

    // initializing an array
    int initial[4] = {3, 5, 7, 8};
    // cout << "number at 3: " << initial[3] << endl;

    // printing an array
    int arr[20] = {3, 4};
    int size = 20;

    // printArray(arr, size);

    int arraysize = sizeof(arr)/sizeof(size);
    // cout<<"size of array is :"<< arraysize <<endl;

    //Char array
    char  chararr[4 ] = {'3' , 'r', 't', 'w'};
    cout<<chararr[2]<<endl;

    //Different types of Array
    bool arr1[3];
    float firstfloat[4];
    double doublearr[5];  


}