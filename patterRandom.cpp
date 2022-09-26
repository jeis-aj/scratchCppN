#include <iostream>
#include "sortStruct.cpp"
#include <unistd.h>

using namespace std; 

int ma()
{
	auto v = ranVect();
	char c[] { '*','#','^','@','!','*','-','|','/','~' };
int sz =	v.size();
	for( int  i =0; i< sz;++i ){
	for ( auto x: c ){
		int val = printRand();
		for (int l = 0; l < val; l++) {
			cout<<x;	
		}
		cout<<"\t\t";
	}
	cout<<endl;

	}
	return 0;
}

/* Prints Random Pattern from random Vector
 */

int main(){

	while(1){
		ma();
		sleep(1);
	}
	return 0;
}
