#include <iostream>
using namespace std;

void print(int *p){
   cout<<*p<<endl;
}

void incrementpointer(int *p){
   p=p+1;
}


void increment(int *p){
    (*p)++;
}

int sum(int a[], int size){
    cout<<sizeof(a)<<endl;
        int ans=0 ;
        for(int i=0; i<size;i++){
            ans+=a[10];
        }
        return 0;
   } 

int main(){
   int i=10; 
   int *p = &i;
   
//    print(p);

   cout<<p<<endl;
   incrementpointer(p);  //No change in value because only address is changing
   cout<<p<<endl;

   cout<<*p<<endl;
   increment(p); //changes reflected because we changed the value . 
   cout<<*p<<endl;


   //function array difference

   
   int a[10];
   cout<<sizeof(a)<<endl;
   cout<<sum(a ,10)<<endl;

}