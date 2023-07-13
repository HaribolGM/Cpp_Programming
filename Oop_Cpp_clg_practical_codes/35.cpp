/*

Multilevel Inhieritance

When a base class is derived by a child class which further derived by another chidl class, then it is 
known as multilevel inheritance.

Syntax: of multilevel inheritance is given below:

class base_class_name
{
    properties;
     methods;

};

class intermediate_class_name:visibility_mode base_class_name
{
    properties;
    methods;

};

class child_class_name:visibility_mode intermediate_class_name
{
    properties;
     methods;

};

The class which provides link between two classes is known as intermediate base class. 

 */

// program 3.5 : Consider a bank. In a bank, different customers have savings account. Some customers
// may have taken loan from the bank. So the bank always maintains information about bank depositors
// and borrowers. 

#include<iostream>
using namespace std;

class customer
{
    protected:
     char name[30];
     int phone_no;

};  // end of base class

class depositor: public customer // child class1
{
    private:
     int account_no;
      float balance;
      public:
      void get_depositor_data()
      {
        cout<<"\nEnter name & phone no ";
        cin>>name>>phone_no;
        cout<<"\nEnther account no and balance ";
        cin>>account_no>>balance;

      }
      void display_depositor_data()
      {
        cout<<"\nName       = "<<name;
        cout<<"\nPhone no   ="<<phone_no;
        cout<<"\nAccount no = "<<account_no;
        cout<<"\nBalance    = "<<balance;
      
      }
};  // end of child class 1 

class borrower:public depositor    // child class 2
{
    protected:
     int loan_no;
     float loan_amount;
      public:
      void get_loan_data()
      {
        cout<<"\nEnter loan no and loan amount";
        cin>>loan_no>>loan_amount;

      }
      void display_loan_data()
      {
        cout<<"\n Loan no     = "<<loan_no;
        cout<<"\n Loan amount = "<<loan_amount;

      }
};  // end of class 2


int main(){

int choice;
cout<<"1-Read & display depositor information"<<endl;
 cout<<"2-Read & display depositor & borrower information"<<endl;
 cout<<"Enter the choice = ";
 cin>>choice;

 switch (choice)
 {
    case 1: 

        depositor d;
        d.get_depositor_data();
        d.display_depositor_data();
        break;


        case 2:

        borrower b;
        b.get_depositor_data();
        b.get_loan_data();
        b.display_depositor_data();
        b.display_loan_data();
        break;
 }



    return 0;
}