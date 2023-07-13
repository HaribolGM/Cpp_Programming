/*

3.1.2.3 Protected Visibility Mode or Protected Inheritance

=> Data member declare as protected within a base class is accessible by the member within its class 
and any class immediately derived from it.

=> The derived class can access private and public members of the base class . Hence, it is visible only
to the base class, not inherited by the derived class.
 
=> the protected member of the base class remain protected.

=> the public member of base  class remain protected.

=> General syntax: for proctected inheritance is given below:

    class base_class_name
    {
        ........;
        ........;

    };

    class derived_class_name: protected base_class_name
    {
        .........;
        .........;

    }


*/

//Program 3.3: Program for use of proctected inheritance.

#include<iostream>
using namespace std;
//base class
class Parent
{
    // protected  data members
    protected:
    int id_protected;

};
//sub class or derived class
class Child : protected Parent
{
    public:
    void setId(int id)
    {
        // Child class is able to access the inherited
        // protected data members of base class
        id_protected = id;

    }
    void displayId()
    {
        cout<<"id_protected is:"<< id_protected<<endl;

    }


};
// main function

int main(){

  Child obj1;

//member function of derived class can 
// access the protected data members of base class

obj1.setId(81);
obj1.displayId();

    return 0;
}









