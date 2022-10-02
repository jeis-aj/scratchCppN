#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

void print(auto arg);
void perm( string s , auto& result);

int mainFn(int argc, char *argv[])
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
			/* nxtStrLen == s.length()-1; */ 
			/* nxtStr =s.substr(1,nxtStrLen); */
			nxtStr =s.substr(1);
			perm(nxtStr,result); 
	}
	line.pop_back();
}


// new test permutation
//

void permNew(string word, vector<string>& result);
int main(int argc, char *argv[])
{
	string word;
	cin>>word;
	vector<string> result;
	permNew(word,result);
	print(result);
	return 0;
}

void permNew( string word, vector<string>& result ){
	static string line;
	if (word.empty()){
		result.push_back(line);
		line.pop_back();
		return;
	}
	for ( auto &ch : word ){
		swap(ch,word[0]);
		line += word[0];
		string sub = word.substr(1);
		permNew(sub,result);
	}
	line.pop_back();
}
