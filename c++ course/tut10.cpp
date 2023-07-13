#include <iostream>

using namespace std;

int main()
{

    /* Loops in c++
    There are three (3) of loops in C++:
    1. For loop
    2. While Loop
    3. Do- while loop
    */
    /* For loop in c++ */

    // int i =1;

    // cout<<i;
    // i++;

    // Syntax for for loop
    // for(initialization ; condition; updation; )
    // {
    // loop body(c++ code);

    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     cout<<i<<endl;

    // }

    // Exmaple of Infinite for loop
    // for (int i = 1; 34 i <= 40; i++)
    // {
    //     cout<<i<<endl;

    // }

    /* while loop in c++ */
    // syntax
    // while (condition)
    // {
    // C++ statements
    // }

    // printing 1 to 40 using while loop

    // int i  = 1;
    // while (i<=40)
    // {
    // cout<<i<<endl;
    // i++;
    // }

    // Exmaple of Infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }



/* do while loop in c++ */
    //syntax
//    do  
//     {
//     C++ statements;
//     }while (contidion)

// printing 1 to 40 using do while loop

    // int i  = 1;
    // do
    // { 
    // cout<<i<<endl; 
    // i++;  
    // }while(false);
 
 
 //table for 6 using do while loop in c++


 
int a,i=1;

cout<<"Input a number "<<endl;
cin>>a;

do
{
    cout<<i*a<<endl;

    i++; 

     
} while (i<=10);
 


    return 0;
}