#include <iostream>	
using namespace std; 

int fn(int argc, char *argv[])
{
	int *p ,*r;
	int a = 8, b = 9;
	p = &a;
	r = &b;
	/* int arr[] ={*p ,*r}; */
	/* const int *arr[]{ p,r }; */
	int const *arr[]{ p,r };

	int* d,e = 99;
	d =&e;

	/* cout<< *arr[0]<<endl; */

	for(auto &v: arr){
		/* cout<<v<<" "; */
		cout<<*v<<" ";
		v = d;
		cout<<*v<<endl;
	}
	cout<<"new"<<endl;
	for (auto a: arr){
		/* cout<<"e"<<endl; */
		cout<<*a<<endl;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	int a  = 2,b = 3,c = 9;
	/* const int *ptr = &a; */
	/* int * const ptr = &a; */
	const int * const ptr = &a;
	/* ptr = &b; */ 
	/* ptr = &b; */
	/* *ptr = 91; */	
	cout<<*ptr<<endl;
	return 0;
}
