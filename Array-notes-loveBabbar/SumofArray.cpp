#include<iostream>
using namespace std;
#include <numeric>


/*
Ques : Print sum of array
*/

int sum(int array[], int size){
    int sum =0 ;
    for(int i=0 ; i<size ; i++){
        sum = sum +array[i]; //isme humne sum variable initialize kiya aur jo bhi sum karte gaue usse sum variable mai store karte gaye 
        
    }

    //return sum
    return sum;
}
int main(){
    cout<<"size : "<<endl;
    int size;
    cin>>size;

    int array[1000];

    for(int i=0; i<size ; i++){
        cin>>array[i];
    }

    cout<<sum(array, size);
}