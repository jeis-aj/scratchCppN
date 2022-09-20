#include <iostream>
#include <list>
#include <bitset>
using namespace std; 

void fn(auto s);
int main(int argc, char *argv[])
{
	bitset<10> bS (string("100011110"));
	/* bS =; */
	/* list <int> bS{8,9,3,5}; */
	/* fn(bS); */
	cout<< bS[8]<<endl;
	return 0;
}
void fn(auto s)
{
for (auto val: s) {
	cout<<" "<<val;
}
cout<<endl;
}

