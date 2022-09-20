#include <iostream>
#include <set>

int in(auto);
using namespace std; 
int main(int argc, char *argv[]){

	set <int> s ={ 2,3,5,8 ,98 ,98,3};
	in(s);
	s.insert(99);
	in(s);
	s.insert(99);
	s.erase(s.find(99));
	in(s);
	cout<<s.size()<<endl;
	cout<<s.count(99)<<endl;
	return 0;
}

int in(auto s)
{

	/* set<int> s = { 2,3,5 }; */

	/* set<int> s = set{ 2,3,5 }; */

	/* auto s = set{ 2,3,5 }; */

	/* set<int> s ; */
	/* s = set{ 2,3,5 }; */

	for(auto &val: s){
		cout<<" "<<val;
	}
	cout<<endl;
	cout<<"end"<<endl;
	return 0;
}

