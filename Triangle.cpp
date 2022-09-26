#include <iostream>
using namespace std; 


/*	Triangle Formation
 */

int main(int argc, char *argv[])
{
	int num;
	cin>>num;
int i = 0;
	for (; i < num; i++) {
		cout.width(num-i+1);
			for (int j = 0; j < 2*i+1; j++) {
				cout<<"*";
			}
			cout<<'\n';
	}
/*
 * Reverse Triangle
 */
	for (;i>=0;--i) {
		cout.width(num-i+1);
			for (int j = 0; j < 2*i+1; j++) {
				cout<<"*";
			}
			cout<<'\n';
	}
	
	
	return 0;
}
