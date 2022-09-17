#include <iostream>
using namespace std; 
string LargestSubStr(string);
int main (){
	
	string line ="HelloWorld" ;
	/* string str  = LargestSubStr(line); */
	cout<<"len: "<<line.length()<<endl;
	line ="";	
	cout<<"len: "<<line.length()<<endl;
	/* cout<<str<<endl; */
}

string LargestSubStr(string line){
	int len = line.length();	
	int i =0;
	string substr="";
	string bestStr="";
	int subLen = 0;
	for (; i<len ; ++i){
		subLen  = substr.length();
		cout<<"substr: "<<substr<<"  ";
		for (int k =i, j =k-1; j>=-(subLen-k);--j){
		cout<<"bstr: "<<substr<<"  ";
			if(line[i] == substr[j]){
			/* cout<<line[i] <<endl; */
			/* cout<<substr[j] <<endl; */
				if(substr.length() > bestStr.length()){
				cout<<"match: "<<substr<<"  ";
					bestStr = substr;
				}
				i=j+1;
				substr.clear();
				substr ="";
			}
	}
		substr +=line[i];
		cout<<endl;
	}
	return bestStr;
}
