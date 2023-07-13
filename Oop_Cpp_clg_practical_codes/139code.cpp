// Program to calculate LCM and GCD of two numbers
#include<iostream>
using namespace std;

int main(){
    int num1,num2,lcm,gcd,temp,prod,n1,n2;
    do{
        cout<<"\n Enter the two positive numbers: \n";
        cin>>num1>>num2;

    }


 
 while (num1<=0 || num2<=0); // loop continues for correct values 

    n1 =num1;
    n2=num2;
    prod=n1*n2;
    while(n2!=0)
    {
        if((n1%n2)==0)
        break;
         

         else {
            temp=n1%n2;
            n1 = n2;
            n2 = temp; 

         } //else statement ends here 

    }// while loop ends here 
    gcd = n2; 
    lcm=prod/gcd;
    cout<<"\nLCM of "<<num1<<" and "<<num2<<" = "<<lcm;
    cout<<"\nGCD of "<<num1<<" and "<<num2<<" = "<<gcd;
    

    return 0;
}