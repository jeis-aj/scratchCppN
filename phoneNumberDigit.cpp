#include <iostream>
#include <vector>
/* #include <vector> */

using namespace std; 

vector <string> keyPad = { "",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };

template <class T>
void print(T container);

void combination(string number, auto& result, int ind =0);

int main(int argc, char *argv[])
{
	string number;
	cout<<"Enter Number: ";
	cin>>number;
	vector<string> result;
	combination(number,result);
	print(result);
	return 0;
}

template <class T>
void print(T container){
	for (auto val: container){
		cout<< val <<" ";
	}
	cout<<endl;
}

void combination(string number, auto& result){
	
	static string line;
	if ( ind >= number.length() ){ result.push_back(line); line.pop_back(); return; }

	for (char val: number ){
		int digit = val - '0';
		for (auto& c: keyPad[digit]){
		line += c;
		combination(number.substr[1],result);
		}
		line.pop_back();
	}
}
