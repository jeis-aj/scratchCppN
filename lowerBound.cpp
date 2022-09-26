#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>

using namespace std; 

int main(int argc, char *argv[])
{
	list <int> li{ 3,1,2,4,5,0, 8,3,6,6,9 };
	list <string> ch= {"h","e","l","l","o"};
	
	/* sort() */	
	/* list<int>:: interator */
	int x = 8;
	for (auto val: li){	cout<< val <<" ";}
	cin>> x;
	/* sort(li.begin(),li.end()); */
	li.sort();
	for (auto val: li){	cout<< val <<" ";}
	auto it = upper_bound(li.begin(),li.end(),x);
	cout<<'\n';
	cout<< x<<" "<<*it ;
	return 0;
}
