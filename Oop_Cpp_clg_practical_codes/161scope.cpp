/*

Scope Resolution Operators(::)

c++ language supports a mechanism to access  a global variable from a function in which a local variable 
is defined with the same name as a global variable. It is achieved using the the scope resolution operator.

The scope resolution operator is denoted by pair of colons(::).

The syntax is as follows:

::variables_name;


*/
#include<iostream>
using namespace std;
int a = 10;
int main(){
    int a=15;
    cout<<"\n Local a="<<a<<"Global a="<<::a;
    ::a=20;
    cout<<"\n Local a="<<a<<"Global a="<<::a;

    return 0;
}
