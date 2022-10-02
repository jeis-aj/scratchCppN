#include <iostream>
#include <bitset>
using namespace std; 

int main(int argc, char *argv[])
{
	int value = 50;
	bitset<8> bs(value);
	string  str = bs.to_string();
	cout<< str <<endl;
	/* int val =~value; */
	/* bitset<6> sb(val); */
	int i =0;
	for (auto val: str)	{
		if (1 == val-'0'){ break; }
	i++;
	}
	cout<< i <<endl;

	/* string sub =  str.substr(i); */

	bitset<8> ns (0);
	for (int j =1; j<=i ; ++j){
		bs.set(8-j,1);
	}
	/* str = bs.to_string(); */
	bs.flip();
	str = bs.to_string();

	/* cout<<n.to_string()<<endl; */
	 int num  = bs.to_ulong();
	 cout<< num <<endl;
	cout<< str <<endl;
	
	
	return 0;
}
