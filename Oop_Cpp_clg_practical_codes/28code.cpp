// Program to display student data.
#include<iostream>
using namespace std;


class student
{
    int marks[5];
     int total;
      char name[20];

      public: 
      void read_data();
       void display_data();


};
void student:: read_data()
{
    int i;
    cout<<"Enter student name : ";
    cin>> name; 
    cout<<"Enter 5 subject marks : ";
    total = 0;
    
    for( i=0; i<5;i++)
    {
        cin>>marks[i];
         total =total + marks[i];

    }
}
void student::display_data()
{
    cout<<"\n Name: "<<name;
     cout<<"\n Marks in 5 subjects :";
     for(int i=0; i<5;marks[i])
     cout<<"\n Total ="<<total;
}


int main(){
    
        student s;
        s.read_data();
        s.display_data();



    return 0;
}