 #include<iostream> 
 #include<fstream>

using namespace std;

	int main()
{
	ofstream ofile;
	 ofile.open("MIT");
	 ofile<<"Welcome to MIt Polytechnic ";
	 ofile.close();

	 char str[30];
	 ifstream ifile;
	 ifile.open("MIT");
	 ifile.close();
	 return 0;

}

