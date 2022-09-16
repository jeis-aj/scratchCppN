#include <iostream>
#include <sstream>
#include <vector>
using namespace std; 

template<typename T>
istream& operator>>(istream& ci,vector<T>& v){
	T val;
	string line;
	getline(ci,line);
	istringstream is(line);
	/* vector<T> ans; */
	while(is>>val){
	v.push_back(val);
	}
return ci;	
}

template<typename T>
ostream& operator<<(ostream& co,vector<T> v){
	for ( auto val: v ){
		co<<val<<" ";
	}
	co<<endl;
	return co;
}


