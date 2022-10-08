#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>

template<typename T>
void print(T);

using namespace std; 
int mainFn()
{
	list<int> li{ 2,3,4,5,7,8,9,6 };

	auto it = li.begin();
	advance(it,4);
	li.insert(it,6);
	advance(it,-5);
	li.insert(it,1);
	it  = li.end();
	/* --iter; */
	--it;
	li.remove(3);
	li.erase(it);
	/* li.insert(it,6); */
	print(li);
	return 0;
}

template< typename T>
void print(T li){
	 	auto it  = li.end();
		for (auto i = li.begin(); i != it; i++) {
			cout<<*i<<" "	;
		}
		cout<<endl;
}


int main()
{
	list<int> li1 { 1,2 };
	list<int> li2 { 3,4 };
	mainFn();
	auto li = li1;
	/* auto it = li.lower_bound(); */
	/* print(li,it); */
	li.merge(li2);
	auto it = lower_bound(li2.begin(),li2.end(),3);
	/* auto it = li.end(); */
	cout<<"till bound"<<endl;
	/* print(li2); */
	for (auto i = li.begin(); i != it; ++i) {
		cout<< *i <<" "	;
	}
	cout<<endl;
	/* print(li); */
}
