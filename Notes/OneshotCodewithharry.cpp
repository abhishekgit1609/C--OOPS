#include <iostream>  // These are pre-processor commands . It means before compiling code , apply operations on it .
#include <string> //used to call string functions . 
using namespace std; // the std namespace is used in order to prevent std namspace again and again in code.
// int sum( int  a,int b)
// {
//     int c;
//     c=a+b;
//     return c;
// }

 class Employee{
        public:
        string name ;
        int salary;
    };
int main(){
       // int main is function . it is executed first
              // cout<<"hello world"<<endl; //cout is used for printing out ,here c is console.
              // endl is used for for moving text to new line

    // Camelcase Notation
               //  int studentGoingOut=4;
              //  cout<<studentGoingOut;

    // USER INPUT
                 //  int a, b;
                //  cout<<"enter the number"<<endl;
        //  cin>>a;

               // cout<<"enter second number"<<endl;
               // cin>>b;

               // cout<<"the sum is " << a+b<<endl;
               // cout<<"the diff is " << a-b<<endl;
               // cout<<"the multiplication is " << a*b<<endl;
               // cout<<"the div is " << (float)a/b<<endl;

    // CONDITION
               //  int age;
               //  cout<<"enter the age"<<endl;
               //  cin>>age;
               //  if(age>=18 && age<=100){
               //      cout<<"you can vote";
               //  }
               //  else if(age>100){
               //      cout<<"invalid age";
               //  }
               //  else{
               //      cout<<"you cannot vote";
               //  }

    // SWITCH
               // int age;
               // cout << "enter number" << endl;
               // cin >> age;

               // switch (age)
               // {
               // case 18:
               //     cout << "You are 18 year old" << endl;
               //     break;
               // case 20:
               //     cout << "You are 20 year old" << endl;
               //     break;

               // case 13:
               //    cout<<"You are 13 year old"<<endl;
               //     break;
               // default:
               // cout<<"invalid age";
               //     break;
               // }


    //Loops
//while loop
           //    int index=0;
           //    while(index<34)
           //    {
           //     cout<<"we are at"<<index<<endl;
           //     index++;
           //    }


//do-while
           // int index=0;
           // do{
           //     cout<<"we are at "<<index<<endl;
           //     index++;
           // }while(index>32);


//for loops
           // for (int i = 0; i <32; i++)
           // {
           //     cout<<"we are at "<<i<<endl;
           // }


//FUNCTIONS


// int a,b;
// cout<<"enter a"<<endl;
// cin>>a;
// cout<<"enter b"<<endl;
// cin>>b;

// cout<<"sum is "<<sum(a,b);



//ARRAYS
    //   int arr[5]={1,4,2,6,2};
    //   cout<<arr[3];

    // int marks[6];
    // for (int i = 1; i < 6; i++)
    // {
    //     cout<<"enter marks"<<endl;
    //     cin>>marks[i];
    // }

    //   for (int i = 1; i < 6; i++)
    // {
    //     cout<<" marks of"<< i<<"student is "<<marks[i] <<endl;
        
    // }

    
//2D ARRAYS
    //  int arr[2][4] = {
    //     {2,4,6,7},
    //     {5,9,1,43}
    //  };
    //  for (int i=0; i<2;i++){
    //     for(int j=0; j<4;j++){
    //         cout<<"the value at "<<i<<","<<j<<" is "<<arr[i][j]<<endl;
    //     }
    //  }

//STRINGS 
        // string name = "abhishek";
        // cout<<"the value is "<<name<<endl;
        // cout<<"the value is "<<name.length()<<endl;
        // cout<<"the value is " <<name.substr(0,3);
      





//POINTERS    it is variable used to store the address of  other variables.
    //   int a =4;
    //   int* ptra;
    //   ptra=&a; //storing address of variable in ptra.
    //   cout<<"the value "<< a <<endl;
    //   cout<<"the value "<< ptra <<endl; //tells the address 
    //   cout<<"the value "<< &a <<endl;  // tell the address
    //   cout<<"the value "<< *ptra <<endl;//tell the value


//CLASSES AND OBJECTS 
   //Object
   Employee abhi;
   abhi.name="Abhishek";
   abhi.salary=100000;
   cout<< "the name of employee is "<<abhi.name<<" and salary is  "<<abhi.salary<<endl;
   

    return 0;
}