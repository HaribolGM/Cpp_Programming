/* Program to read name , post and salary of N employees.
Post can be manager or supervisor or worker. Add salary of all mangers, 
supervisors, workers and  display it. Program to illustrate use of static
 data members in a class.

*/

#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
#include<string>
using namespace std;

class EMP
{
    char name [10], post[10];
    int salary;

    public:
    static int m_sum, s_sum, w_sum; // variable for 3 posts

    void accept()
    {
        cout<<"\n Enter name,  post & salary of an employee = ";
        cin>>name;
        cin>>post; 
        cin>>salary;

    }

void add_salary()
{
    int x;
    x=strcmp(post,"manager");
    if(x==0)
    m_sum = m_sum +salary;

    x=strcmp(post,"supervisor");
    if(x==0)
    s_sum = s_sum +salary;
    
    x=strcmp(post,"worker");
    if(x==0)
    w_sum = w_sum +salary;
    

}

void display()
{
    cout<<"\n "<<name <<post <<salary;

}




}; // end of class

// define static variables

int EMP::m_sum;
int EMP::s_sum;
int EMP::w_sum;

int main()
{
    EMP E[10];
    int N, i, temp;
    cout<<"\n Enter total no. of employees =";
    cin>>N;
    for(i=0;i<N;i++)
    {
        E[i].accept();
        E[i].add_salary();

    }
    cout<<"\n Name Post Salary";
    for (i=0;i<N;i++)
    {
        E[i].display();
    }

cout<<"\n Total salary of all managers = "<<EMP::m_sum;
cout<<"\n Total salary of all supervisors = "<<EMP::s_sum;
cout<<"\n Total salary of all workers = "<<EMP::w_sum;
temp = EMP::m_sum + EMP::s_sum + EMP::w_sum;
cout<<"\n Total salary of all the employees in the company = ";
cout<<temp;




return 0;
} // end of main









