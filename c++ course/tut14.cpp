#include<iostream>
using namespace std;

// ::::::::::::::structure:::::::::::::::::



  typedef struct employee
 {
        int eId;
        char favChar;
        float salary;
        
 }ep;  

// ::::::::::union in structure:::::::::::::
union money 
 {
        int rice;
        char car;
        float pounds;
        
 };  
     



 

int main(){  
   

//    ::::::::::enum :::::::::::::::::::::
   enum Meal{breakfast, lunch, dinner};
   Meal m1 = dinner;  
   cout<<m1<<endl<<endl<<endl;
   cout<<breakfast;  
   cout<<lunch; 
   cout<<dinner;  
  
   
    // ep yash; 
    // union money m1; 
    // m1.rice = 34; 
    //  m1.car = 'c'; 
    // cout<<m1.rice;




    // struct employee shubham; 
    // struct employee rohanDas; 
    // yash.eId = 1;
    // yash.favChar = 'c';
    // yash.salary = 120000000;
    // cout<<"The value is"<<yash.eId<<endl; 
    // cout<<"The value is"<<yash.favChar<<endl;
    // cout<<"The value is"<<yash.salary<<endl;
    // return 0;
}