#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
	int num;
	cout<<" Enter a number: "<<endl;
	cin>>num;
	
	int val = num &(num-1);
	/* bitset<8> bin(val); */
	cout<<val<<endl;
	if( val == 0 ){
		cout<<" it is  a Power of 2"<<endl;
	}
	else{
		cout<<"Not Power of 2 !!"<<endl;
	}

	return 0;
}
