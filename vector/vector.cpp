#include <iostream>
#include <vector>
#include "VectorIn.h"
using namespace std; 
int main(int argc, char *argv[])
{
	cout<<"Elements in Vector"<<endl;
	vector<int> numV;
	cin>>numV;	
	cout<<numV;
	/* cout<<"count in vector: "<<numV.count(5)<<endl; */
	/* NO count member in vector*/
	return 0;
}
