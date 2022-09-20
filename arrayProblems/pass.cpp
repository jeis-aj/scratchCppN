#include <iostream>
using namespace std; 

void fn(int arr[]){
	int sz = sizeof(arr)/sizeof(arr[0]);
	cout<<"size: "<<sz<<endl;
	for(auto val:arr){
		cout<<" "<<val; 
	}
	cout<<endl;
}
int main(int argc, char *argv[])
{
	int arr[]{ 1,2,4,8,4,2,0 };
	fn(arr);
	return 0;
}
