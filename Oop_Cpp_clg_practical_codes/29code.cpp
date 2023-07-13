// Program find maximum of two numbers.

#include<iostream>
using namespace std;


class number    
{
    int a,b;
    int find_max();
    public:
    void init(int, int);
    void disp_max();


};


void number:: init (int x, int y)
{
     a=x;
     b=y;

}
int number:: find_max()
{
     if(a>b)
     return a;
     else
     return b;

}


void number:: disp_max()
{
    cout<<"\n Two numbers are: = ";
    cout<< a  << "and"   << b;
    cout<<"\n Maximum number is "<<find_max(); 

}



int main()
{


number n;
n. init(10,20);
 n.disp_max();
   return 0; 
}