#include <iostream>
using namespace std; 

uint64_t fact(int num){
	if (num == 1 || num ==0)return 1;
	return num*fact(num-1);
}

uint64_t fn (int n,int r){
	return fact(n)/(fact(n-r)*fact(r))	;
}

// Create a tower like pascal's, but with nCr value;
// NOt exactly a pascal's tower

int main(int argc, char *argv[])
{
	/* cout<<fact(8); */
	/* return 0; */

	int sz ;
	cout<< "Enter sz: ";
	cin>> sz;
	for (int i = 1; i <= sz; i++) {
		int mid = sz*3;
		int wd =  mid - i*3 ;
		cout.width(wd);
		for (int j = 0; j < i; j++) {
			/* int val =  i*j; */
			/* val = !val?val+1:val; */
			int spc = 5;
			auto val = fn(i,j);
			cout<<val<<" ";
			cout.width(spc);
		}
		cout<<'\n';
	}
	return 0;
}
