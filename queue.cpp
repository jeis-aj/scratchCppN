#include <iostream>
#include <queue>
using namespace std; 

struct da{
	int val;
	string str;
	string name;
	bool operator<(const da& nx){
		return val<nx.val;
	}

	bool operator>(const da& nx){
		return val>nx.val;
	}

};
void operator<<(ostream& co,const da& nx){
	co<<nx.str<<endl;
}

/* typedef da da; */
int main(int argc, char *argv[])
{
	queue<struct da> myQ;
	da da1,da2;
	da1= { 7,"arun" };
	da2 = { 9,"jyothish" };
	myQ.push(da1);
	myQ.push(da2);
	/* cout<<da2; */
	/* auto out =  myQ.front(); */
	/* auto out =  myQ.top(); */
	auto out =  myQ.front();
	cout<<out;
	cout<<endl;
auto va = 3.8;
	cout<<typeid(va).name();
	/* cout<<(da1<da2); */
	return 0;
}

