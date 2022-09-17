#include <iostream>
using namespace std; 

void fn(int &arr,int);
int BinarySearch(int,int*,int,int);

int in(int Element)
{
	cout<<"element is : "<<Element<<endl;
	int arr[] = { 8,2,4,9, 0,1 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	/* fn(*arr,sz); */
	int LowerIndex = 0,UpperIndex = sz-1;
	int index = BinarySearch(Element,arr,LowerIndex,UpperIndex);
	if (index == -1){
		cout<<"element: "<<Element<<"could NOt Found"<<endl;
	}
	cout<<"element: "<<Element<<"found at index:  "<< index<<endl;
	return 0;
}

void fn(int &arr,int sz){
cout<<arr<<endl;	

for (int i = 0; i < sz; i++) {
	int val = *(&arr+i);	
	cout<<val<<endl;
}
	/* int sz = sizeof(arr)/sizeof(arr[0]); */
	/* cout<<sz<<endl; */

}

int BinarySearch(int element,int* arr,int a,int b){

	int mid  = a+b;
	mid/=2;
	int midElement = arr[mid];
	if (element == midElement){
		return mid;
	}
	else if (element < midElement ){
		BinarySearch(element, arr, a,mid);
	}
	else if (element > midElement ){
		BinarySearch(element, arr, mid,b);
	}
		return -1;
}

int main(){
	int ar[] = {  2, 4,8 ,8, 2 };
	for (auto x: ar){
		in(x);
	}
	return 0;
}
