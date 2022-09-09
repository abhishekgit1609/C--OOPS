#include <iostream>
using namespace std;

/*
 Array ki value change ho jayege aggar mai function mai update krdu . 
 because function mai array ki copy ni ja ri hai
 its the base address of  array . so koi bhi change kiya its gona change array in main function
*/
 
int scope (int arr[], int size){

    arr[2]= 5;
   cout<<"array in function " <<" ";
   for(int i=0; i<size ; i++){
     cout<<arr[i]<<" ";
   }

  

}
    
int main(){
    
  int size ;
  cin>>size ;
   
   int arr[324]; 

   for(int  i =0 ; i<size ; i++){
    cin>>arr[i];

   }
   scope(arr, size);
   cout<<endl;

  
   cout<<"array in main"<<" ";
   for(int i=0; i<size ; i++){
     cout<<arr[i]<<" ";
   }

  

} 
