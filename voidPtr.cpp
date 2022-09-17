#include <iostream>
using namespace std; 

int ma(int argc, char *argv[])
{
	int arr[]={ 8,2,4,5 };
	void* ptr = arr;
	typedef int* ip;
	cout<<*(1+(ip)ptr)<<endl;
	return 0;

}

void print(int[] &arr){
	for(auto val:	arr){
		cout<<val<<" ";
	}
	cout<<endl;
}
