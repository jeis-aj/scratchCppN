#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
	int arr[]{ 3,4,8,9,1,3,2 };
int largest=arr[0],secondLargest = arr[0];
int sz = sizeof(arr)/sizeof(arr[0]);
	for (int i =1;i <sz;++i){
		/*
		if(secondLargest< largest){
		secondLargest = max (secondLargest,val);
		}
		largest = max (largest,val);
		*/
		int val = arr[i];
		if(largest<val)	{
			secondLargest = largest;
			largest = val;
		}
		
	}
	cout<<"Largest: "<<largest<<endl;
	cout<<"Second Largest: "<<secondLargest<<endl;
	return 0;
}
