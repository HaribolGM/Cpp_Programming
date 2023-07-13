#include<iostream>
using namespace std;

//Function prototype
// type function-name (arguments);
// int sum(int a, int b); // => Acceptable:::::::::::::
// int sum(int a, b); // => Not Acceptable XXXXXXXXXXXXXXX
int sum (int,int);  //=> Acceptalbe:::::::::::::::
//  void g(void);   //=> Acceptalbe:::::::::::::::
void g();           //=> Acceptalbe:::::::::::::::

int main(){
    int num1, num2;
    cout<<"Enter first number "<<endl; 
    cin>>num1;
    cout<<"Enter second number "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1,num2); // return value funciton key
      g();
    return 0; 
} 
 
int sum(int a , int b) {
    // Formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;

    return c; 
}
  
void g(){   
    cout<<"\n\nHello, Good Morning";
}