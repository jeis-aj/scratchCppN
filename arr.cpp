#include <iostream>
using namespace std; 
int main(int argc, char *argv[])
{
	int arr[]= { 1,2,3,4 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	cout<<sz<<endl;
	for (int i =0, j=sz-1; i<sz;++i,--j){
	cout<<"index i : "<<i<<" val: "<<arr[i]<<endl;
	cout<<"index j : "<<j<<" val: "<<arr[j]<<endl;
	}
	return 0;
}
