#include <iostream>
/* #include <pair> */
#include <tuple>
#include <string>
#include <vector>
using namespace std; 
/*
 * pair and tuples
 */

template<class T,class S>
struct myPair{
	T first;
	S second;
};
   



int main(int argc, char *argv[])
{
	myPair po{"arun",100};
	/* pair po{"arun",100}; */

	cout<<po.second<<endl;
	
	return 0;
}
