#include <iostream>
#include <algorithm>
using namespace std; 

int main(int argc, char *argv[])
{
	
	int arr[] { 8,3 ,2 ,7, 3, 9, 4, 1, 0 };
	int sz  = sizeof (arr)/sizeof(arr[0]);
	
	auto val = upper_bound(arr,arr+sz,9);
	cout<<sz<<endl;
	cout<<val -arr<<endl;
	cout<<*val<<endl;
	return 0;
}
