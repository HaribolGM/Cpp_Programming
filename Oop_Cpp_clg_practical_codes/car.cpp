#include<iostream>

using namespace std;

class carmanufacturere
{

string name;

public:
        void getdata()
        {
            cout<<"Enter the name of the carmanufacturer company : "<<endl;
            cin>> name;

        }

       void show()
       {
        cout<<"\nThe Name of Carmanufacturer company is : "<<name<<endl;

       }



};
class carmodel : public carmanufacturere
{

string mname;
int mnum;

public:

        void getdata1()
        {
            cout<<"Enter the model name of the car : "<<endl;
            cin>>mname;
            cout<<"Enter the model number of the car : "<<endl;
            cin>>mnum;
        }

        void show1 ()
        {
            cout<<"The model name of the car is : "<<mname<<endl;
            cout<<"The model number of the car is : "<<mnum<<endl;
            
        }
};
class car : public carmodel
{

int cnum;
string ccolor;

public :

            void getdata2()
            {
                cout<<"Enter the car no. : "<<endl;
                cin>> cnum;
                cout<<"Enter the color of the car  : "<<endl;
                cin>> ccolor;
                
                
             }


        void show2 ()
        {
            cout<<"The car no. is  :"<<cnum<<endl;
            cout<<"The car color is : "<<ccolor<<endl;

        }



};



int main ()

{
    car c1 ;

    c1.getdata();
    c1.getdata1();
    c1.getdata2();
    c1.show();
    c1.show1();
    c1.show2();



    return 0;


}