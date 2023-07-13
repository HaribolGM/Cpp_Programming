// Program to declare a class rectangle having data members length and breadth. Aceept
//this data for one object and display area and permimeter of rectangle.

#include<iostream>
using namespace std;

class rectangle
{
    int len, bred , area , peri;

    public:
    void accept();
    void calculate();
    void display();

};

void rectangle:: accept()
{
    cout<<"Enter length and breadth : ";
     cin>>len >>bred;
      
}

void rectangle:: calculate()
{
    area = len * bred;
    peri = 2*(len+bred);

}

void rectangle:: display()
{
    cout<<"Area of rectangle :"<<area;
    cout<<"\nThe perimeter of rectangle :"<<peri;

}



int main(){

rectangle r;

r.accept();
r.calculate();
r.display();



    return 0;
}