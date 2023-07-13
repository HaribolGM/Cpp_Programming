#include<iostream>

 
using namespace std;



class Account 
{
int acc_no;
    int balance;

public:
void getdata()
{
    

  cout<<"\nEnter your accout no. : ";
  cin>>acc_no;
  cout<<"\nEnter your balance : ";
  cin>>balance;

}

void display()
{
   cout<<"\nAccout no. is : "<<acc_no  ;
    cout<<"\nAccout Balance : "<<balance  ;
}

};


 int main()

 {

Account acc[5], *ptr[5];
ptr[5] = & acc[5];
int i;

for (i=0 ; i <= 4 ; i++) 
{
   ptr[i]->getdata();
}


for (i=0 ; i <= 4 ; i++)
{
   ptr[i]->display();
}




return 0;

  
 }