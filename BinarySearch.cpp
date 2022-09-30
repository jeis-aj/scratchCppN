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

int mainFn(){
	int arr[] = {  2, 4,8 ,8, 2 };
	/* for (auto x: ar){ in(x); } */
	int temp =0;
	int x;
	cout<<"enter a num: "<<endl;
	cin>>x;
	for (int sz = *(&arr+1)-arr,up=sz/2 ; up>=1; up /=2 ){
	while (arr[up+temp] < sz && arr[up+temp]<= x) x+=up;
	}
	if( arr[temp] == x ){
		cout<< x <<" found at index: "<< temp <<endl;
	}
	return 0;
}

void print( int *startAddr, int size ){
	
	for (int index = 0; index < size ; index ++){
		int currentValue = startAddr[index];
		cout<< currentValue <<" ";
	}
	cout<<endl;
}

int main(int argc, char *argv[])
{
	int arr []	= { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int jumpIndex = 0;
	int sizeOfArr = *(&arr+1)-arr;
		
	cout<<"size of arr: "<<sizeOfArr<<endl;
	print(arr , sizeOfArr);
	cout<<"Enter Search Value: "<<endl;
	int givenValue;
	cin>>givenValue;

	/*
	 * Complex O(log(n)) Binary Search
	 * half-ing jump width
	 */

	for (int jumpWidth = sizeOfArr/2; jumpWidth >= 1 ; jumpWidth/=2 ){
		
		cout<<".";
			
		while (jumpIndex+jumpWidth < sizeOfArr && arr[jumpIndex + jumpWidth] <= givenValue){
			jumpIndex += jumpWidth; }
	}
	int valueFound = arr[jumpIndex]	;
	if (valueFound == givenValue ){
		cout<< "value found  at index: "<< jumpIndex <<endl;
	}
	else{
	 cout<< " value not found "<<endl;
	}

	return 0;
}
