#include <iostream>
#include <map>
using namespace std; 

int main(int argc, char *argv[])
{
	map <int,bool> mp;
	int i =0;
	while (i< 10){
		cout<<mp[i]<<endl;
		++i;
	}
	return 0;
}

