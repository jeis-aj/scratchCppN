#include <iostream>
#include <math.h>
using namespace std; 

void printPascal(int num){
	int sz = num;
	int width_comp = 3; // Compensation width
	
	for (int i = 0; i < sz; i++) {
		int wd = num*width_comp-(width_comp*i);
		cout.width(wd);
				/* for (int j = 0; j < i; j++) { */
					
					int val = pow(11,i);
					string str = to_string(val);
					/* cout<<str; */
					for(char val:str){
				cout<<val;
				int spc = 6;
				cout.width(spc);
					}
				/* } */
				cout<<endl;
		
	}
}
int main(int argc, char *argv[])
{
	int num;
	cout<<"Enter a number: "<<endl;
	cin>>num;

	printPascal(num);

	return 0;
}


