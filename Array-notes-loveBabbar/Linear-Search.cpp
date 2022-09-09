#include <iostream>
using namespace std;


bool LinearSearch(int arr[], int size , int key){
      
      for(int i=0 ; i<size ;i++){
        if(arr[i]==key){
          return 1 ; 
        }
       }
      return 0;


}
int main(){
    cout<<"size : "<<endl;
    int size;
    cin>>size;

    cout<<"key : ";
    int key;
    cin>>key;
    int arr[100];

    for(int i=0; i<size ; i++){
        cin>>arr[i];
    }
    
    
    bool output = LinearSearch(arr , size , key  );

    if(output){
        cout<<"key is present ";

    }
    else{
        cout<<"Key not present ";
    }

}