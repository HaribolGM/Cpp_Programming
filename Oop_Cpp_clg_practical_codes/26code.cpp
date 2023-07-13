#include<iostream>
using namespace std;


class acc
{
    private: 
    int number;
     string name;
   float bal;


    friend void disp(acc ob1)

    {
    cout<<"accout no ="<<ob1.number<<"\n";
    cout<<"name ="<<ob1.name<<"\n";
    cout<<"bal ="<<ob1.bal<<"\n";

    }
    
    public:
    acc (int a, string b, float c)
{
    number = a;
    name = b;
    bal = c;

}

};







int main(){


 acc ob1 (255,"Nimisha", 25000);
 disp(ob1);                         // calling friend fucntion
 

 return 0;

}