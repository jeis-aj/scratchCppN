#include <iostream>	
using namespace std; 
int fn(void);
int main(int argc, char *argv[])
{
	int a=1,b=8;
	int c =2;
	cout<< (c=a*b,++a)<<endl;
	cout<< a,cout<<b <<endl;
	if (cin){
		
		cout<<" if(cout)"<< endl;
		int z;
		z = c+=b +=a;
		cout<<z<<endl;
	
		}{	
		cout<<" operator precedence of ++a, evaluation result"<<endl;
		cout<<"a: "<<a<<"  b: "<<b<<"  c: "<<c<<endl;
	int z = a*b+++a;
		cout<<"z = a*b+++a; 	"<<z<<endl;
		cout<<"a: "<<a<<"  b: "<<b<<"  c: "<<c<<endl;
	z = a*b+(++a);
		cout<<"z = a*b+(++a)	"<<z<<endl;
		cout<<"a: "<<a<<"  b: "<<b<<"  c: "<<c<<endl;
	z = a*b++ +a;
		cout<<"z = a*b++ +a		 "<<z<<endl;
		cout<<"a: "<<a<<"  b: "<<b<<"  c: "<<c<<endl;
	z = a*b+ ++a;
		cout<<"z = a*b+ ++a		"<<z<<endl;
		cout<<"a: "<<a<<"  b: "<<b<<"  c: "<<c<<endl;
	z = (a*b)+(++a);
		cout<<"z = (a*b)+(++a)		"<<z<<endl;
		cout<<"a: "<<a<<"  b: "<<b<<"  c: "<<c<<endl;
		int a;
	}
	cout<<c<<endl;
	//	2*8 = 16
	//	8
	cout<<"fn: "<<fn()<<endl;
	return 0;
}

int fn(){

	int a =5, b=6;
	return b+=a,b;
}
