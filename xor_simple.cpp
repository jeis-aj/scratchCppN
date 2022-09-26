#include <iostream>
#include <bitset>
using namespace std; 

void solution(int*,int,int);
int main(int argc, char *argv[])
{
	int arr[]{ 8, 9 ,3 ,2 };

	//.
	int s  = 8^3;
	cout<<"xor: "<<s<<endl;
	//
	cout<<"Find Decimal To Binary : "<<endl;
	int val = 7;
	const int z = val & 0xf;
#define lo 8
	bitset<lo> bin(val);
	/* bitset<z> bin(val); */				// We can't use use variables in Constant Expressions
	// 	Thus we can use 	#define 
	auto str = bin.to_string();
	cout<<"dec: "<< val<<"	bin: "<< str <<endl;
	int key = s;
	int sz = *(&arr+1)-arr;
	solution (arr,sz,key);
	return 0;
}

void solution(int* arr,int sz,int key){

	for (int i = 0; i < sz-1; i++) {
		auto temp = arr[i]^key;
		for (int j = i+1; j < sz; j++) {
			if ( temp == arr[j] ){
				cout<<"A: "<<arr[i]<<"	B: "<<arr[j]<<endl;
			}
	}
}
}
