#include <iostream>
#include <bitset>
#include <sstream>
#include <algorithm>
#include <string>

using namespace std; 

int fn(int argc, char *argv[])
{
	string str;
	cin >> str ;
	/*
	bool err = false ;
	if ( str.length() != 10 ){ err = true; }
	for ( char c : str ){
		if ( c > '9' || c < '0'){ err = true; break; }
	}

	if ( err ){	 cout << " not valid "; return 0;}
	else { cout << " valid "; }
	*/

	stringstream phoneNumberStream(str);
	/* str = "9544591977"; */
	uint64_t phoneNumber;
	phoneNumberStream >> phoneNumber;
		
	cout << phoneNumber <<endl;
	return 0;
}

int main(int argc, char *argv[])
{
	char str [] = "00110011";
	/* string str =  "00110011"; */
	const int sz = 8;
	bitset<sz> bs(str);
	cout<< bs.to_string() <<endl;
	int preceedingZeros=0;
	string mask;
	mask.insert(0,6,'0');
	mask.insert(0,"11");
	bitset<sz> maskSet(mask);
	cout<<mask <<endl;
	while (!bs[sz-1 - preceedingZeros]){ ++preceedingZeros; bs[sz-1 - preceedingZeros] =1; }

	cout<< bs.to_string() <<endl;
	cout<< preceedingZeros <<endl;
	cout << bs.to_ulong() <<endl;
	return 0;
}
