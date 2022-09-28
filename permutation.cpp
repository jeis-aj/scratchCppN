#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

void print(auto arg);
void perm( string s , auto& result);

int main(int argc, char *argv[])
{
	vector<string> result;
	string str;
	str ="abc";
	perm(str,result);
	print(result);
	return 0;
}

void print(auto arg){
	for (auto val: arg){
		cout<<val<<" ";
	}
	cout<<endl;
}

void perm( string s , auto& result){

	/* cout<<s<<endl; */
	static string line="";
	static int count=0;
	count++;
	if (  1==s.length() ){ result.push_back(  line+s[0] ); line.pop_back();return; }
	for(auto& c: s){ 
		swap(c,s[0]);
		line+=s[0];
		string nxtStr ;
		int nxtStrLen ;
		try{
			nxtStrLen == s.length()-1; 
			nxtStr =s.substr(1,nxtStrLen);
			perm(nxtStr,result); 
		}
		catch(...){
			/* cout<<"bad alloc err: "; */
			/* cout.width(10); */
			/* cout<< " str len: " <<s.length() <<" ,str: "<<s<<" rec_count: "<<count<<",nxt str: "<<nxtStr<<endl; */
			/* cout<<"nxt str len: "<<nxtStrLen<<endl; */
			/* print(result); */
		}
	}
	line.pop_back();
}

