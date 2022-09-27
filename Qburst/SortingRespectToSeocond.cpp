#include <iostream>
#include <algorithm>
using namespace std; 


#define MAX_WIDTH 2
#define MAX_LENGTH 5

bool comp(int ar[MAX_WIDTH], int ar2[MAX_WIDTH]){
	return ar[1]<ar2[1];
}
void print(int arr[MAX_LENGTH][MAX_WIDTH]){
	cout<<"{  ";
	for (int i = 0; i < MAX_LENGTH ; ++i) {
		cout<<"{ ";
		for (int j = 0; j < MAX_WIDTH ; ++j) {
		cout<<arr[i][j];
		if (j+1 != MAX_WIDTH) cout<<" , ";	}
			cout<<" }";
	}
	cout<<"  }";
}


int main(int argc, char *argv[])
{
	int arr [MAX_LENGTH][MAX_WIDTH]{ 
			{1,3},
			{3,5},
			{4,1},
			{3,2},
			{2,8}
	};
	
	// Size of ARray
	int sz = *(&arr+1)-arr;
	
	print(arr);
	cout<<endl;
	/* int a = comp(arr[1],arr[2]); */
	/* cout<<a<<endl; */
	sort(arr,arr+sz,comp);
	print(arr);
	
	return 0;
}

void SimpleSort(int arr[MAX_LENGTH][MAX_WIDTH]){
		
}

