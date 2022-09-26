#include <iostream>
#include <algorithm>
using namespace std; 

#define sz 3
#define sz2  2

void print(int ptr[sz][sz2],int , int );
int main(int argc, char *argv[])
{
	int arr[sz][sz2]={ {2,4},{3,1},{9,3} };
	/* sz2 = */ 
	int isz,isz2;
	isz2 =  *(&arr[0]+1)-arr[0];
	isz =*(&arr+1)-arr;
	/* cout<<sz<<endl; */
	print(arr,sz,sz2);
	/* sort(arr,arr+sz,comp); */
	/* print(arr); */
	return 0;
}

void print(int ptr[sz][sz2],int isz, int isz2){
	
		cout<<"{  ";
	for (int i = 0; i < sz; i++) {
		cout<<"{  ";
		for (int j = 0; j < sz2; j++) {
			cout<<ptr[i][j];
			cout<<" ";
			if(j == sz2-1) break;
			cout<<", ";
		}	
		cout<<"} ";
			cout<<" ";
			if(i == sz-1) break;
			cout<<", ";
	}
		cout<<"}  ";
}
