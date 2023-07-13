/*
Public Visibility Mode or Public Inheritance 

=> When the access modifier for a base class is public, all public memebers of the base class become
public members of the derived class and all protected members of the base class become protected
members of the derived class.

=> The members of derived class can access memebers of the base class if the base class members are
public or protected. They can not access private memebers.

=> General syntax for public inheritance is given below:

class base_class_name
{
    .................;
    .................;

};
class derived_class_name: public base_class_name
{
    ...........;
    ...........;
    
}
*/

// Program 3.1: lesson no. 3 
//Program to demonstrate public derivation or visibility mode.

#include<iostream>
using namespace std;
class Circle
{
    public:
        double radius;
         double compute_area()
        {
            return 3.14*radius*radius;

        }
        
};
 
int main()
{
    Circle obj;
    // accessing public data member outside class
    obj.radius = 5.5;
    cout<<"Radius is:"<<obj.radius<<"\n";
    cout<<"Area is:"<<obj.compute_area();
    return 0;


}