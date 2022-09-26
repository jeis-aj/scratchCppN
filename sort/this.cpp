#include <iostream>
using namespace std; 
/*
 * Using Struct data
 */
struct data{
	int x;
	int y;
	data *ptr;
	void isSame(data *p){
		if(this == p){
			cout<<" is same"<<endl;
		}
		else{	cout<<"Not Same"<<endl;}
	}
};

// Using Class
class 

int main(int argc, char *argv[])
{
	struct data d, p;
	d.isSame(&d);
	return 0;
}

/*	Using this keyword in struct , Check weather the given struct is same
 */
