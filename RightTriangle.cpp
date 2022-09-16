#include <iostream>
using namespace std; 	

int main(int argc, char *argv[])
{
	int num;
	cout<<"Enter num: ";
	cin>>num;
#define MAX_WIDTH  100
#define fr(i,sz) for (int i=0; i< sz;i++)
#define SPACE 5
	int count =0;
	fr(i,num){
		cout.width(MAX_WIDTH-i*SPACE);
		fr(j,i){
		count += j;
			cout<<count;
			cout.width(SPACE);
		
		}
		cout<<endl;
		count += 1;
	}
	return 0;
}

/*
 * Right side Triangle
 */
