#include <iostream>
#include <vector>

using namespace std; 

void prompt(auto&);
int main(int argc, char *argv[])
{
	vector<int> ans;
	while(1)	{
		prompt(ans);
		cout<<"[.............................]"<<endl;
		cout<<endl<<"Do you want to continue? y|n";
		char c;
		cin>> c;
		if(c == 'n'){ break; }
	}
	return 0;
}

uint64_t fact(int,auto&);
void prompt( auto& result ){
	int num;
	cout<< "enter number: "<<endl;
	cin>>num;
	cout<<endl;
	int sz = result.size();
	if (num < sz){
		cout<<"NO Extra Calculation Required"<<endl;
	}
	else { cout<< num - sz <<" Calulations required "<<endl;}
	uint64_t val = fact(num,result);
	cout<< " factorial at "<<num<<" is "<<val<<endl;
}

uint64_t fact(int num,auto& result){
	static int count =0;
	if ( num <  result.size()){
		return result[num];
	}
	++count;
	if (num ==1){ return 1; cout<<count<<" Extra Calculated"<<endl; count =0;}
	uint64_t Cfact = num* fact(num-1,result);
	result.push_back(Cfact);
	return Cfact;
}
