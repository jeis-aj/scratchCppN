
#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
	cout<<"Enter two Number: ";
	int	num1 ,num2; 
	cin>>num1>>num2;

	int &dec = num1<num2 ? num1 : num2;
	int &inc = num1>num2 ? num1 : num2;

	--dec;
	++inc;
// Simple way to  check and manipulate two given data
//
	cout<<"after dec least num && inc most num: ";
	cout<<num1<<" "<<num2<<endl;
	return 0;
}
