#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
	string str;
	cout<< str.insert(0,5,'0') <<endl;	// Insert same character 'x', n times
	str.insert(1,"hello");	// Insert String at index position 
	string sub = str.substr(3);
	str.erase(3,5);			 // xhelloxxxx -->  removes lloxx , result xhexx
							 /* cout<<  str.insert(0,"0"); */
	str.replace(2,4,2,'x');
	str.insert(0,5,'x');
	cout<< str.size() <<endl;
	str.insert(1,"0sl");

	str.clear() ;
	str ="0123456789";
	/* str.replace(3,2,8,'x'); */
	/* str += "hello"; */
	char err[] = " error detected !";
	str.insert(5,err);
	str.erase(5,5);		// element to erase from string , index , count
	cout << stoi( str )<<endl;
	cout<< str <<endl;
	/* cout<< sub <<endl; */
	return 0;
}
