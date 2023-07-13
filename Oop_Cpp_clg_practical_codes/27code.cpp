// program for array of objects.

#include<iostream>
using namespace std;


class student
{
int roll;
char name[20];

public: 
void getdata(void);
void putdata(void);

};
void student:: getdata(void)
{
    cout<<"enter roll :";
    cin>>roll;
    cout<<"enter name :";
    cin>>name;

}
void student::putdata(void)
{
    cout<<"roll: "<<roll<<endl;
    cout<<"name: "<<name<<"\n";
}




int main(){
    int i;
    student s[3] ; // array of size three 
    for(i=0;i<3;i++)
    {
        cout<<i+1<<"student information"<<endl;
        s[i].getdata();

    }
    for(i=0;i<3;i++)
    {
        s[i].putdata(); 

    }
    return 0;
}