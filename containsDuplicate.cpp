#include <iostream>
#include <vector>
#include <map>

using namespace std; 	
class Solution {
	public:
		bool containsDuplicate(vector<int>& nums) {

			int i =0;
			int sz = nums.size();
			map <int,bool> mp;

			while (i < sz ){

				if (mp[nums[i]] == true){
					cout<<"key: "<<nums[i]<<" bool: ";
					return true; 
				}
				mp[nums[i]] = true;
				++i;
			}
			return false;
		}
};
/*
 * check  if vector contains duplicates
 * using map
 */

int main(int argc, char *argv[])
{
	vector <int> v { 6,3,5, 8,9, 1,2,0,4,6 };
	/* vector <int> v {2,3,4}; */

	Solution sol;

	bool out = sol.containsDuplicate(v);
	cout<<out<<endl;

	return 0;
}
