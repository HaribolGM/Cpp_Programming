/*
In the above program 3.1 the data members radius is public so we are allowed to access it outside the class.

3.1.2.2 Private Visibility Mode or Private Inheritance

=> In private inheritance the base class has been inherited privately. In this inheritance,
    1.Each pubilc members in base class is private in derived class.
    2.Private member of the base class remain private in the base class. These are only visible in the base class.
      Protectd members of the base class are private in the derived class.

=> Genral syntax for private inheritance is given below:

class base_class_name
{
    ...........;
    ...........;

};

class derived_class name: private base_class_name
{
    ..........;
    ..........;
    
}


*/

// Program 3.2: Program for private derivation.

#include<iostream>
using namespace std;


class Circle
{
    // private data member

    private:
    double radius;

    // public member function

    public:
    double compute_area(double r)
{
    // Member function can access private
    // data member radius
    radius= r;
    double area = 3.14*radius*radius;
    cout<<"Radius is:"<<radius<<endl;
    cout<<"Area is:"<<area;
}
};



int main(){

    // creating object of the class
    Circle obj;
    // Trying to access private data member
    // directly outside the class
    obj.compute_area(1.5);

    return 0;
}