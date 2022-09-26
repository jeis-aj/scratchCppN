#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std; 

struct da{
	int x;
	string word;
	bool operator<(const auto& v2){
	return x<v2.x;
	}
};

int printRand(int init, int end);
void print(auto&);
void add(auto&);
int printRand(int=0,int=10);
/* int printRand(); */
vector<da> ranVect()
{
	srand(time(NULL));
	vector<da> v;	
	add(v);
	/* print(v); */
	/* sort(v.begin(),v.end()); */
	/* print(v); */
	return v;
}
/* Created a random sized vector array ,pushed a struct contains Random Value into it and Sorted it
 * srand(time(NULL)) -> seed must be provided one time else, repeats same random number
 */
void add(auto &v){
	int i =0;
	int count = printRand();
	int sz = printRand(); 
	while(i<sz){
	int randomValue =printRand();
	da temp;
	temp.x = randomValue;
	/* cout<< temp.x; */
	v.push_back(temp);
	++i;
	}
}
void print(auto &v){
	cout<<endl;
	for(auto val: v){
		cout<<val.x<<" ";
	}
	cout<<endl;
}

int printRand(int init, int end){
/* int printRand(int init=0, int end=10){ */
int divisor,offset;	
divisor = end;
offset = init;
	return rand()%divisor + offset;
}
