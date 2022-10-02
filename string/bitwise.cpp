#include <iostream>
#include <bitset>

using namespace std; 

template <class T>
string toBinary(T val);

int main(int argc, char *argv[])
{
	int	val = 120;
	cout<<" OG value toBinary: "<< toBinary(val)<<endl;
	uint64_t sl = 2147383644;
	cout<<" OG value toBinary: "<< toBinary(sl)<<endl;
	return 0;
}

template <class T>
string toBinary(T val){
	/* const int sz = sizeof(T); */
	const int sz = 8;
	bitset<sz> bs(val);
	return bs.to_string();
}
/*
template<class T>
void ibm(T val){
	int sz = sizeof(T);
	bitset<sz> bs(val);
}
*/
