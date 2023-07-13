/* Single Inheritance

=> When one base class is derived by one child class, then it is known as single inheritance.

Syntax : single inheritance

class base_class_name
{
    properties;
     methods;

};

class derived_class_name : visibility_mode base_class_name
{
    properties;
    methods;

};

*/

// 3.4 :  The program illustrate the single inheritance . A base class contains the data of employee
// name,empno and sex. the derived class contains basic salary. The derived class has been declared as an array of class objects.


#include<iostream>
using namespace std;

class base
{
    private:
     char name[20];
      int empno;
      char sex;

      public:
      void get();
      void disp();

      
};

class derived : public base 
{
    private:
    float bsalary;

    public:
    void get();
    void disp();

};

void base:: get()
{
    cout<<"\nEnter name :";
    cin>>name;
    cout<<"\nEnter Employee id :";
    cin>>empno;
    cout<<"\n Enter Sex : ";
    cin>>sex;

}

void base ::disp()
{
    cout<<"name = "<<name;
     cout<<"Emp no. is = "<<empno;
     cout<<"Sex = " <<sex;

}

void derived:: get()
{
    base:: get();
    cout<<"\nEnter basic salary : ";
     cin>>bsalary;

}

void derived :: disp()
{
    base :: disp();
    cout<<"Basic salary = "<<bsalary;

}
int main(){
    derived ob[10];
    int i,n;
    cout<<"How many employees ? :";
    cin>>n;
     for(i=0;i<n;i++)
     {
        ob[i].get();
     }

        cout<<endl;
        cout<<"Name Empno. Sex Bsalary \n";
        for ( i = 0; i < n; i++)
        {
            ob[i].disp();
            cout<<endl;

        }
        

    return 0;
}