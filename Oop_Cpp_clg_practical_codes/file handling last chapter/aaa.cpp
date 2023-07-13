#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Account

{
	 int acc_no;
	 float balance;

	public:

	 void input()
	 { 
		 cout << " Enter account no : ";
		 cin >> acc_no;
		 cout << "\n Enter balance amount : " <<endl;
		 cin >> balance;


	 }

	 void output()

	{
		cout << " Account No : "<<acc_no<<endl;
		cout << " Balance Amount  : "<<balance << endl;

	}





};



int main()
{
	Account a[5] ;
	
	

	
int i;
	 
	for( i = 0 ; i < 5 ; i++)
{
	
	a[i].input();
	
}



	for ( i = 0; i < 5 ; i++ )

{
	
	a[i].output();
	
}

return 0;

}



