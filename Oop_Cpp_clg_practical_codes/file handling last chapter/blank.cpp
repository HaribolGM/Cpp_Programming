#include <bits/stdc++.h>
using namespace std;

int main()
{
	fstream f1;

	string ch;

	int count = 0 ;

	f1.open("12.txt",ios::in);

	while (!f1.eof()) {
		f1 >> ch ;

		count ++ ;

	}

	f1.close ();

	cout << "There are " <<"\t " <<--count <<"\t " <<"Whitespaces in file " ;
	return 0;
}
