#include <iostream>	
#include <algorithm>	
#include "structComp.cpp"	
using namespace std; 

void print(const struct data *ptr,int sz){
	int i =0;
	for (; i< sz;++i){	
		struct data val = ptr[i];
		/* if(i != sz-1){ cout<<"next: "; } */
		cout<<"next: ";
		cout<<" "<<val.key<<" "<<val.data;
		cout<<endl;
	}
	/* cout<<endl; */
}
/*Sorting Data using comparison function
 *
 * and sorting data using operator overloading
 *
 * /
 */


int main(int argc, char *argv[])
{
	struct data StructdataArr[]={
	{ 8,2 },
	{9,3},
	{0,3},
	{ 8,3 },
	{4,5},
	{7,3},
	{9,3}
	};
	int sz = sizeof(StructdataArr)/sizeof(StructdataArr[0]);
	print(StructdataArr,sz);
	/* sort(StructdataArr,StructdataArr+sz); */
	sort(StructdataArr,StructdataArr+sz,comp);
	cout<<endl;
	cout<<"after Sort"<<endl;
	cout<<endl;
	print(StructdataArr,sz);
	cout<<endl;
	return 0;

}
