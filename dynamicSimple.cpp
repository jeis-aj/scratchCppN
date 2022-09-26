/*
   dynamic programming fibonacci

   */

#include <iostream>
#include <vector>
using namespace std; 

void print(auto);
int dynamic(int num, auto & result)
{
	int sz = result.size();
	
	int  it = num - sz;
	if (it< 0){
		cout<<" No extra iteration required"<<endl;
	}
	else{
		cout<<" Extra iterated : "<< it <<" Times"<<endl;
	}
	if (sz >num){
		return result[num-1];
	}
	for (sz-1; sz < num ; ++sz) {
		int fibValue = result[sz-1] + result[sz-2];
		result.push_back(fibValue);
	}
	return result.back();
}

void print(auto li){
	for (auto val: li){
		cout<<val<<" ";
	}
	cout<<endl;
}
/* fibonacci  dynamic programming simple code 
 *
 * dynamicSimple.cpp
 */

int main(int argc, char *argv[])
{
	
	vector<int> fib;
	fib.push_back(0);
	fib.push_back(1);
	char x ;
	do{
	cout<<endl;
	print(fib);
	int num;
	cout<<"Enter num: "<<endl;
	cin>>num;
	int val = dynamic(num, fib);
	cout<<"fib at "<<num<<" is "<<val<<endl;
	cout<<endl;
	/* print(fib); */
	cout<<" check more ? y|n"<<endl;
	cin>>x;
	}while(x != 'n');
	return 0;
}
