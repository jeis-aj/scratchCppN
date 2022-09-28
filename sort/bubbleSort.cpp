#include <iostream>
/* #include <algorithm> */
using namespace std; 

void sortI(int &a,int &b);
void Sorting(int *arr,int sz);
void print(int *ptr,int sz);
int main_fn(int argc, char *argv[])
{
	int arr[]{ 3,5,2,1,8,9,0,1,2 };
	int sz = *(&arr+1)-arr;
	
	print(arr,sz);
	Sorting(arr,sz);
	print(arr,sz);

	return 0;
}
void Sorting(int *arr,int sz){
	for (int i = 0; i < sz-1; i++) {
			for (int j = 0; j < sz; j++) {
					sortI(arr[j],arr[j+1]);
			}
	}
}
void print(int *ptr,int sz){
	cout<<endl;
	for (int i =0; i<sz; ++i){
		int val = ptr[i];
		cout<<val<<" ";
	}
	cout<<endl;
}
void sortI(int &a,int &b){
	if (a<b)return;
	a = a+b;
	b = a-b;
	a = a-b;
}
