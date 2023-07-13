/*

Friend Function

A friend function of a class is defined outside that class's scope but it has the right to access all
private and protected members of the class. Even though the prototypes for friend functions appear 
in the calss definition, friend are not member functions.
A Friend can be a function, function template, or member function, or a class or class template, in 
which case the entire class and all of its members are friends.


To declare a function as a friend of a class, precede the function prototype in the calss definition
with keyword friend: 

Snytax : 
        friend return_type  function_name(arguments);


Example: 

    class student
    {
        ......... .
        ......... .
        public : 
        void display();
        friend void getdata();

    };

    void student ::display()
    {
        ...... .
        ...... .

    }

    void getdata()
    {
        ............
        ............

    }


From this we can recongnize the change of keyword friend. The declaration of function display() does
 not have keyword friend so while defining it outside the class, we have to use scope resolution
 operator to specify the scope. Whereas with function getd(), this is not needed. As we said a fucntion
 can be declared as a friend in any number of classes and they have full access rights to the private 
 member of the class. 

A friend function in C++ have the following properties:

1. The frined function is not in the scope of the class in which it has been declared.
2. It cannot be called using the object of that class.
3. It can be invoked directly like a normal function.
4. It cannot access data members directly. These are accessed with object name and dot 
membership operator, for example: ob1.m;
5. Friend can be declared anywhere (in public, protected or private section) in the class without 
changing its meaning.
6. It has objects as arguments.
7. Friend function cannot be inherited.



*/




