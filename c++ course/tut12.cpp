#include<iostream>
using namespace std;

int main(){
    

//What is pointer?
//=> daya type which holds the address of other data types

    int a=3;
    int* b=&a;
// & ==> (address of) operat
cout<<"The address of a is "<<&a<<endl;
cout<<"The address of b is "<<b<<endl;




// * ==> (value at)Dereference operator

cout<<"The address of b is "<<*b<<endl<<endl;


//pointer to pointer

int** c = &b;
 cout<<"The address of b is "<<&b<<endl;
 cout<<"The address of c is "<<c<<endl;
 cout<<"The value at address c is "<<*c<<endl;
 cout<<"The value at address value_at(value_at(c)) is  "<<**c<<endl;


    return 0;
}