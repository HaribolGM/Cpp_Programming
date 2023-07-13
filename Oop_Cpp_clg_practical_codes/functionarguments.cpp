/*

Oject as Function Arguments

In c++ we can pass object as function arguments and also return an object from the function . The
objects of a class can be passed as arguements to member functions as well as non-member functions.

An object can be passed to a function as an arguments in the same way as the variables of any other
data type. In this process, a copy of the object is passed to a function.

If any change is made to the given object inside the function, it will not be reflected in the actual
 object. This process is similar to the concept of pass by value.

Another wya of passing an object is to pass the starting address of the ojbect to a function. If any
change is made to the object inside the function, it will be reflected in the actual object. This
 process is similar to the concept of pass by reference.


1. Passing Object to Function: Objects may be passed to a functions just like any other variable.
   Arguements can be passed to a function in following two ways:
        i) Call By Value : In which copy of the object is passed to the function.
        ii) Call By Reference : In which an address of the object is passed to the function.

        Objects are passed through the call by value mechanism by default. In this method value of the
        variable (object) will be passed to function as an argument or parameter.

2. Returning Objects From the Function: A function may return an object to the calling function.
   It works similar to the normal integer or float variables. For such functions return type will be
    name of class.

    Following program illustrate object as function arguemtns which adds two complex numbers.


*/

#include <iostream>
using namespace std;

class COMPLEX
{
    int real, imag;

public:
    void get_no(int a, int b)
    {
        real = a;
        imag = b;
    }

    void display_no()
    {
        cout << "\nReal =" << real;
        cout << "\nImag =" << imag;
    }
    COMPLEX add_no(COMPLEX C2)
    {
        COMPLEX C3;
        C3.real = real + C2.real;
        C3.imag = imag + C2.imag;
        return (C3);
    }
};

int main()
{
    COMPLEX C1, C2, C3;
    C1.get_no(10, 20);
    C2.get_no(30, 40);
    C3=C1.add_no(C2);
    cout << "\n Addtion = ";
    C3.display_no();

    return 0;
} 