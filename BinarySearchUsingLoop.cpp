#include <iostream>	
#include <algorithm>	
using namespace std; 

int main(int argc, char *argv[])
{
	cout<<"unsorted"<<endl;
	int arr[] { 8,3 ,2 ,7, 3, 9, 4, 1, 0 };
	int sz  = sizeof (arr)/sizeof(arr[0]);
	for(auto val: arr){ cout<<" "<<val; }cout<<endl;
	sort(arr,arr+sz);
	cout<<"sorted"<<endl;
	for(auto val: arr){ cout<<" "<<val; }cout<<endl;
	int index=-1;
	int a = 0,b =sz-1;
	cout<<"size: "<<sz<<endl;
	int element;
	cout<<"Enter element: ";
	cin>>element;
	while(a<=b){
		int mid = a+b; mid/=2; 
		int val = arr[mid];
		if(val == element){ index = mid; break;}
		if (val> element){ b =mid-1; }
		if (val< element){  a =mid+1;}
	}
	cout<<"found at index: "<<index<<endl;
	return 0;
}

/* Binary Search for Element in an Array
 * used while loop
 */
