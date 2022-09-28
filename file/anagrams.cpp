#include <iostream>
#include <map>
#include <algorithm>
#include <list>

using namespace std; 

int main(int argc, char *argv[])
{
	/* list<int> li{ 8,3,2,3,5,6,7,3,2,8 }	; */
	list <string> li{ "aavb","bvaa","sld","lds","sl", "arun","jyothish","dog","god" };
	map <string,list<string>> v;
	for (auto val: li){
		string str =val;
		sort(val.begin(),val.end());
		/* cout<<val<<endl; */
		v[val].push_back(str);
	}
/*
 * anagrams grouping
 * used map 
 */

	// selecting each element in map --> returns a pair { a, b };
	for (auto val: v){
		cout<<endl;
		// 	selecting 
		for (auto it: val.second){
			cout<<it<<"	";
		}
		cout<<endl;
		// */
	}

	return 0;
}
