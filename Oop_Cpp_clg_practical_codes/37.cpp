#include<iostream>
using namespace std;

class student
{
    protected:
                int roll, m1, m2;

    public:
             void get()
             {
                cout<<"Enter the Roll No. : "<<endl; 
                cin >>roll;
                cout<<"\nEnter the two highest marks: "<<endl;
                cin>>m1>>m2;
             }

};

class extrac
{
    protected: 
                int xm;
    public: 
            void getsm()
            {
                cout<<"Enter the mark for Extra Curriculam Activities : "<<endl; 
                cin>> xm;

            }
};

class output : public student, public extrac
{
    int tot, avg;
     public:
                void display()
                {
                    tot = (m1 + m2 + xm);
                    avg = tot/3;
                    cout<<"\n\n\t Roll No : "<<roll <<"\n\tTotal         :"<<tot;
                    cout<<"\n\tAverage  : "<<avg;

                }
};




int main(){
    

    output o;
    o.get();
    o.getsm();
    o.display();



    return 0;
}