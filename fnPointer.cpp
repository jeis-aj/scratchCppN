#include <iostream>
using namespace std; 

int simple(int s){
	cout<< "simple fn callled \t";
	return s;
}

int square( int val ){
	cout<< "sq fn called \t";
	return val*val; 
}

int cube(int val){
	cout<< "cube fn called \t";
	return val*val*val; 
}

int doubleOf(int val){
	cout<< "double of fn called \t";
	return 2*val; 
}

int otherFn(int argc, char *argv[])
{
	int sz = 10;
	int (*myFnPointer[sz]) (int){ &simple, &square , &cube , &doubleOf};

	int i = 0;
	while(i < sz){
		cout << myFnPointer[i](8) <<endl;
		++i;
	}

	return 0;
}
