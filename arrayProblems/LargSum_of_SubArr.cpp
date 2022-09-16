#include <iostream>
#include <algorithm>
using namespace std; 
/*
 * Max sum, of  sub Array
 */
int main(int argc, char *argv[])
{
	int arr[] = { 100,2, -1, -2, -3,89, -50,3,5 };
	int sz = sizeof(arr)/sizeof(arr[0]);
	int maxSum =0,sum =0;
	for (int i =0;i<sz; ++i){
			sum += arr[i];
			sum = max(sum,arr[i]);
			maxSum = max(sum,maxSum);
	}
	cout<<"arr: "<<endl;
	for (int i =0;i<sz; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"max sum: "<<maxSum<<endl;
	return 0;
}
