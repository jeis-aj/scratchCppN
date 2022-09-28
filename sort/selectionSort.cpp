#include <iostream>
#include "bubbleSort.cpp"
using namespace std; 

void swapI(int &i,int&j){
	if (i<j)return;
	i = i +j;
	j = i-j;
	i = i-j;
}

void SelectionSort(int *arr,int sz){
	
	for (int i = 0; i < sz-1; i++) {
		for (int j = i+1; j <sz; j++) {
			swapI(arr[i],arr[j]);
		}
	}
}


int main(int argc, char *argv[])
{
	int arr[]{ 3,5,2,1,8,9,0,1,2 };
	int sz = *(&arr+1)-arr;

	print(arr,sz);
	SelectionSort(arr,sz);
	/* Sorting(arr,sz); */
	print(arr,sz);
	
	return 0;
}

