// C ++ control Structure 

// 1. Sequence Stucture
// 2. Seletion Stucture
// 3. Loop Structure

// this 3 are basic Structure

// selection structure..

#include<iostream>
using namespace std;  

int main() {
    // cout<<"This is tutorial 9";

int age;
cout<<"Tell me the age"<<endl;
cin>>age; 

//  1.selection control structure : if else-if else ladder

// if((age<18)&& (age>0)){
//     cout<<"You can not come to my party "<<endl;
// }
// else if (age==18){
//     cout<<"You are a kid and you will get a kid pass to the party "<<endl;     
// }
// else if (age<1){
//     cout<<"You are not yet born"; 
// }
// else{
//     cout<<"You can come to my party " <<endl;  
// }

//  2. selection control structure:  switch case statements

switch (age)
{
case 18:
    cout<<"You are 18"<<endl;
    break;

case 22:  
    cout<<"You are 22"<<endl;
    break;
case 2:
  
    cout<<"You are 2"<<endl;
    break;

default: 
cout<<"No special cases"<<endl;
    break;
}

cout<<"Done with switch case"<<endl;




return 0;
}
