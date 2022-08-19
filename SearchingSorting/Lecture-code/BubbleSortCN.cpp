#include <iostream>
using namespace std;



void bubbleSort(int *input, int size)
{
	
    for(int i=0 ; i<size-1; i++){ 
		for(int j=0; j<size-i-1 ; j++){
			if(input[j]>input[j+1]){ 
				//Swaping
				int temp = input[j];
				input[j]=input[j+1];
				input[j+1]= temp;
			}
		}
	}
}

int main()
{
     	cout<<"Enter size of array"<<endl;
		int size;
		cin >> size;

        
		int *input = new int[size];
        cout<<"Enter the desired Array"<<endl;
		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		bubbleSort(input, size);
       cout<<"Your Sorted Array"<<endl
	   ;
		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}







