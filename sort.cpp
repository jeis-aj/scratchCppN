#include <iostream>
#include <algorithm>

using namespace std; 

int main(int argc, char *argv[])
{
	int arr[]= { 9,3,2,8,5,3 };
	int sz = *(&arr+1)-arr;
	cout<<"num arr \n";
	for(int i=0;i<sz;++i){
		cout<<" "<<arr[i]<<" ";
	}
	cout<<endl;
	sort(arr,arr+sz);			// sorting - begin address till end address
	cout<<"num arr after sort\n";
	for(int i=0;i<sz;++i){
		cout<<" "<<arr[i]<<" ";
	}
	cout<<endl;
	int* nw[sz];
	for(int i=0;i<sz;++i){
		nw[i]=arr+sz-i-1;
	}
	/* sort(arr+sz,arr); */
	/* int arr[]= { 9,3,2,8,5,3 }; */
	cout<<endl;
	cout<<"addr arr \n";
	for(int i=0;i<sz;++i){
		cout<<" "<<nw[i]<<" ";
	}
	cout<<endl;
	cout<<"addr arr after sort\n";
	sort(nw,nw+sz);
	for(int i=0;i<sz;++i){
		cout<<" "<<nw[i]<<" ";
	}
	cout<<endl;
	cout<<"Elements in addr arr after sort\n";
	for(int i=0;i<sz;++i){
		cout<<" "<<*nw[i]<<" ";
	}
	cout<<endl;

	return 0;
}
