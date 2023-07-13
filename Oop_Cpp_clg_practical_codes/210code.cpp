// Program to declare class account having data members principle, rate_of_interest,no_of_years. 
// Accept this data for one object and find out simple interest.


#include<iostream>
using namespace std;


class account
{
    private :
    int p,n,r;
     float si; 
      public:
      void getdata()
      {
        cout<<"Enter Principle, Rate_of_interest and number_of_years:\n";
        cin>> p >> r >> n;
      }

    void calculate()
    {
        si = (p * n * r) / 100;
    }

      void display()
      {
        cout<<"Simple Interest = ";
         cout<<si;

      }
};



int main(){
account a;
 a.getdata();
a.calculate();
a.display();    
    return 0;
}