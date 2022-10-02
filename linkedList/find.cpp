#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

using namespace std; 

int main(int argc, char *argv[])
{
	list<int> li { 2,3,4,5,6,7 };
	int element = 5;
	/* list <int>::iterator it =  find(li.begin(),li.end(),element); */
	typedef int index;
	string str = "heWlloWorldWDD";
	string substr = str.substr(2,str.length()-2-3);
	cout<<substr<<endl;
	index it =  str.rfind('W');
	/* index it =  str.find('W'); */
	/* cout << it-li.begin()<<endl; */
	/* cout<< *it <<endl; */
	cout<< it <<endl;
	return 0;
}
