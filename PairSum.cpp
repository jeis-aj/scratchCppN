#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std; 

void print(auto cont);
int main(int argc, char *argv[])
{
	set <int> st{ 2,3,4,5,6,8,9,0,1,11 };
	cout << "set: " << endl;
	for ( auto val: st ){
		cout << val << " ";
	}
	cout << endl;
	// initialize map for finding pairSum
	map <int,bool> mp;
	vector <pair<int,int>> result;
	cout << "Enter num: ";
	int num = 10;
	cin >> num ;
	for (auto val: st){
	int key = num - val;
	mp[key] = true;
	}
	for (auto val: st){
		if (mp[val] && val < num/2){
			result.push_back({num-val,val});
		}
	}
	print(result);
	return 0;
}
void print(auto cont){
	cout << endl;
	for ( auto val: cont ){
		cout << val.first << "  " << val.second <<endl;
	}
	cout << endl;
}
