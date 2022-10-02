#include <iostream>
#include <list>
#include <vector>
using namespace std; 

template<class T>
auto fn ( T v ){
	
	T ans;
	
	for (auto val: v){
		/* cout<< val <<" "; */
		ans.push_back(val*2);
	}
	return ans;

}
void print(auto v){
	for (auto val: v){
		cout<<val <<" ";
	}
	cout<<endl;
}

//		type deduction and return type manipulation

int main(int argc, char *argv[])
{

	list <int > li { 2,3,5 };
	vector <int> v { 2,3,5 };
	
	auto out1 = fn (li);
	auto out2 = fn(v);
	print(out1);
	cout<<typeid(out1).name()<<endl;
	cout<<endl;
	print(out2);
	cout<<typeid(out2).name()<<endl;
	return 0;
}
