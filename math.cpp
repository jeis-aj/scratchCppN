/*
 * mathematics problems basic
 */


#include <iostream>
#include <iterator>
#include <set>
#include <string>
#include <math.h>
using namespace std; 

int main(int argc, char *argv[])
{
	string str="hello World";
	set<char> vowels;
	vowels.insert('a');
	vowels.insert('e');
	set<char>::iterator it;
	for (it = vowels.begin();it != vowels.end();++it){
		cout<< *it<<endl;
	}
	cout<<"Enter Two Numbers: "<<endl;
	int num1,num2;
	cin>>num1>>num2;	
	cout<<"log: "<<log(num1)<<endl;
	return 0;
}
