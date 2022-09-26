#include <iostream>
#include <list>
#include <bitset>
using namespace std; 

void fn(auto s);
int main(int argc, char *argv[])
{
	bitset<10> bS (("100011110"));
	bitset<10> BS (("111000101"));
	/* bS =; */
	/* list <int> bS{8,9,3,5}; */
	/* fn(bS); */
	bitset<10> ib(10);
	bitset<16> ab(32768);
	/* auto res = (int)ab; */
	cout<< ab<<endl;
	cout<< (bS| BS)<<endl;
	return 0;
}
void fn(auto s)
{
for (auto val: s) {
	cout<<" "<<val;
}
cout<<endl;
}

