#include <iostream>
using namespace std;

int main()
{
    // Array Examples

    int mathMarks[4];

    mathMarks[0] = 2278;
    mathMarks[1] = 22;
    mathMarks[2] = 453;
    mathMarks[3] = 227;
    cout << "This are math Marks : " << endl
         << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl
         << endl;

    // you can change the value of the array
   
    cout << "This are  Marks : " << endl << endl;
    int marks[4] = {23, 45, 56, 89};
     marks[2] = 455;
    cout << marks[0] << endl;
    cout << marks[1] << endl; 
    cout << marks[2] << endl;
    cout << marks[3] << endl<<endl;


// for (size_t i = 0; i < 4; i++)
// {
//     cout<<"The value of Marks "<<i<<"is"<<marks[i]<<endl;
// }
  






  // Quick quiz : do the same thing while and do-while loops?
 

// Quick quiz answer : ++ 

//  int i=0; 
//    do   
//   {     cout<<"The value of Marks "<<i<<"is"<<marks[i]<<endl;
//      i++;
//    } while (i<=3);
    
  

//Notes :::::::::::::::::::::::::::::::::::::::::::::::
// Pointer Arthmetic 

// address new = address current + i * size (date type) 


// address  new = p+;
// address current = p; = 32
// i = 1;
// size (data type )= 4

// so here 

// 32 + 1*4
// = 36 

//Notes :::::::::::::::::::::::::::::::::::::::::::::::

 




// Pointers and Array 

// int* p = marks;
 

// cout<<*(++p)<<endl;
// cout<<*(p++)<<endl; 
 
// cout<<"The value of *p is " <<*p<<endl;
// cout<<"The value of *(p+1) is " <<*(p+1)<<endl;
// cout<<"The value of *(p+2) is " <<*(p+2)<<endl; 
// cout<<"The value of *(p+3) is " <<*(p+3)<<endl;






 
    return 0;
}