// Program to declare a class book having data members as title 
//and author. Aceept this data for live and display this accepted data.

#include<iostream>
using namespace std;


class book
{ 
    private :
     char auth[20];
     char title[50];
     
     public:
         void accept();
         void display();

}b[2];

void book:: accept()
{
    cout<<"\n Enter Title of the book : "<<endl;
    cin>>title;
    cout<<"\n Enter author name : " <<endl;
    cin>>auth; 
    }

    void book:: display()
    {
         cout<<"\nThe name of title is : "<< title;
         cout<<"\n The name of author is "<<auth;

         
    }

 

int main()
{
  

       int i; 
    for (i = 0; i < 5; i++)
    {
    b[i].accept();
    b[i].display();
}
    return 0;
}  