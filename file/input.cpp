#include <iostream>
#include <fstream>
using namespace std; 

int main(int argc, char *argv[])
{
	
	fstream myfileIps("myfile.txt",ios::in);
	fstream myfileOps("myfile.txt",ios::app);

	if (myfileOps.is_open()){
		cout<<"myfile.txt	is open for Output "<<endl;
	}

	if (myfileIps.is_open()){
		cout<<"myfile.txt	is open for Input "<<endl;
	}

	myfileOps<<"New line Written"<<endl;
	string str2;
	myfileIps>>str2;
	myfileOps<<str2;

	myfileIps.close();
	myfileOps.close();
	cout<<endl;

	while (!myfileOps.eof()){
		string line; getline(myfileOps,line);
		myfileOps<<line<<endl;
	}

	cout<<"new"<<endl;
	fstream ip("ip.txt",ios::in);
		fstream op;
	op.open("op.txt",ios::out);
	string str;		

	while(getline(ip,str)){
		op<<str<<endl;
	}
	ip.close();
	op.close();
	return 0;
}

