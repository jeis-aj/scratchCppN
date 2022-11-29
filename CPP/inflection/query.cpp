#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std; 


int main(int argc, char *argv[])
{
	vector <int> vect;
	int sz;
	cin >> sz;
	for ( int i =0; i < sz ;++i ){
		int temp;
		cin >> temp;
		vect.push_back(temp);
	}
	int lower,upper;
	cin >> lower >> upper;
	auto it = vect.begin();
	vector <char> temp(it+lower, it+upper);
	map <int,int> mp;
	sort(temp.begin(),temp.end());
	/*
// print
	cout << "temp: " <<endl;
	for ( auto val: temp ){
		cout << val << " ";
	}
	cout <<endl;
// print end

	*/
	for (int val: temp){
		mp[val]++; }

	int secondLargest = temp[1];
	int count = mp[secondLargest];
	cout << "second: " << secondLargest << endl;
	int ans = 0;	
	for (auto ele: mp){
		if ( ele.second == count ){
			ans++;
		}
	}
	return ans;
}
