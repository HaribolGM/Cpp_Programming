//  program 1.45 Use of scope resolution operator for class.
#include<iostream>
using namespace std;
class T
{
      int a,b;
      public:
        void getdata();
        void putdata();


};

void T::getdata()
{
    cout<<"Enter two Num : ";
    cin>>a>>b;

}
void T::putdata()
{
    cout<<"\na="<<a<<endl;
    cout<<"b="<<b<<endl;

}
int main()
{
    T a;
    a.getdata();
    a.putdata();
    return 0;

}