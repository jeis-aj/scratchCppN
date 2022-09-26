#include <iostream>
#include <list>
#include <set>
#include <vector>

using namespace std; 


template<typename T>
set<T> V2S(const vector<T>& v);
void print(auto v);
int main(int argc, char *argv[])
{
	
	/*

	 */

	list<int>li
	vector<int> v{ 3,5,6,3,2,6,5 };
	auto result = V2S(v);
	print(v);
	cout<<endl;
	print(result);
	cout<<endl;
	cout<<"Duplicate Elements: ";
	cout<< v.size() - result.size()<<endl;
	return 0;
}

void print(auto v){
	for (auto val: v){
		cout<<val<<"	";
	}
}

template<typename T>
set<T> V2S(const T& v){
	set<T> ans;
	for (auto val: v){
		ans.insert(val);
	}
	return ans;
}

template<typename T>
T duplicate(const T& v){
	T temp;
	for (auto val: v){
		temp.push_back(val);
	}
}
