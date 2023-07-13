/*  

Memory Management operator 

In  C language, for dyanamic allocation of memory we can use malloc() and calloc()functions and to 
release the memory we are using free() function. For the same task in C++, two operators are for the 
dynamic memory management namely, new and delete operator. These two operators performs the task of allocating 
and freeing the memory in a better, simpler and easier way.

The keywords new and delete can be used to allocate and deallocate memory. They are also known asd free store 
operators.


*/

// 1.46 Program for new and delete operators.

#include<iostream>
#include<string>
using namespace std;

int main(){

        char *x;
         x=new char[10]; 
         cout<<"Enter String : ";
         cin>>x;
         cout<<"\n The string is  : " <<x<<endl;
         delete x;

    return 0;
}