#include <iostream>
#include <bitset>

using namespace std; 

int main(int argc, char *argv[])
{
	bitset<1*8> bs('a');
	cout<<bs.to_string()<<endl;
	return 0;
}
