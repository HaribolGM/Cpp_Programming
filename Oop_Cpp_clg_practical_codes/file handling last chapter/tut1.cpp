//5.1 program for file.
#include<fstream>
#include<iostream>

using namespace std;

int main()

{
	ofstream ob1 ("stud1.dat");
	ifstream ob2 ("stud2.dat");
	char str [90];

	ob1<<"This is student database";

	while(ob2)
	{
		ob2.getline(str,80);
		cout<<str;
	}
	return 0;
	}

