#include<iostream>
using namespace std;
 

int sum (int a, int b){
    int c= a+b;
    return c;
}
// This will not swap a and b
void swap(int a, int b){
    int temp =a;              
    a=b; 
    b=temp; 
} 




// call by reference using pointers
// this will swap a and b
void swapPointer(int* a, int* b){
    int temp =*a;              
    *a=*b; 
    *b=temp; 
} 

// call by reference using c++ reference Variables
// int &
 void swapreferenceVar(int &a, int &b){
    int temp =a;              
    a=b; 
    b=temp;    
    // return a; 
} 








int main(){   
   
    int a =4;  
    int b = 5;  
    // cout<<"the sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"The value of a is "<<a<<endl<<"and the value of b is " <<b<<endl;
    // swap(a,b);// This will not swap a and b
//   swapPointer(&a,&b); // this will swap a and b using pointers reference
 swapreferenceVar(a,b);  // this will swap a and b using  reference variables
//  swapreferenceVar(a,b) =555; // this will swap a and b using  reference variables
     
  cout<<endl<<"The value of a is "<<a<<endl<<"and the value of b is " <<b<<endl;

    return 0;
} 