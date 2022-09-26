#include <iostream>	
#include <vector>	
using namespace std; 

class Solution{
	protected:
		vector<int> input;
		int keyResult;
	public:
		template<class T,class S>
			Solution(const T& input, const S& x){
				this->input = input;
				this->keyResult = x;
			}
		vector<pair<int,int>> get(){
			auto arr = input;
			vector<pair<int,int>> ans;
			for (int i = 0; i < input.size()-1; i++) {
				int temp = input[i]^keyResult;
				for (int j = i+1; j < input.size(); j++) {
					if (temp == arr[j])	{
						ans.push_back({arr[i],arr[j]});
					}
				}
			}
			return ans;
		}
};

/* ostream& operator<<(ostream& co,const T & ar); */
ostream& operator<<(ostream& ,vector<pair<int,int>>&);

int main(int argc, char *argv[])
{
	vector<int> arr{ 8,3,5 };

	int x = 2;
	/* int sz = *(&arr+1)-arr; */
	Solution mysol(arr,x);

	auto temp = mysol.get();
	/*
	for(auto val: temp){
		cout<<val.first<<"	"<<val.second<<endl;
	}
	cout<<endl<<"		end		"<<endl;
	*/
	/* cout<<temp; */

	vector<pair<int,int>> dummy;
	dummy.push_back({8,9});
	dummy.push_back({2,5});
	cout<<dummy;

	return 0;
}

/* template<typename T> */
ostream& operator<<(ostream& co ,vector<pair<int,int>>& arr){
	try {
	for(auto val: arr){
		co<<"	A: "<<val.first<< "	B: "<<val.second<<endl;
	}
	}
	catch(...){
		cout<<" Can't Obtain	"<<endl;
	}
	return co;
}
