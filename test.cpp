#include <iostream>
using namespace std; 	

int main(int argc, char *argv[])
{
	int x =1;
	for (int i = 1; i < 63; i+=i) {
		cout<<"i: "<<i<<endl;
		cout<<"x: "<<x<<endl;
	x+=x;	
	}
	cout<<x<<endl;
	return 0;
}
