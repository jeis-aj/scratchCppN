#include <iostream>	
#include <iterator>	
#include <list>	
using namespace std; 

void print(auto li){
	for(auto val: li){
		cout<< val << " ";
	}
	cout<<endl;
}

template <typename T>
void printIt(T li){
	list<int>::iterator it;
	it = li.begin();
	for (;it != li.end();++it){
		cout<< *it<<" ";
	}
	cout<<endl;
	cout<<"it at end() "<<*it<<endl;
}

template <typename T>
void swapIt(T li){
	list<int>::iterator it,prIt;
	it = li.begin();
	prIt = it;
	/* prIt = it+2; */	
	for (;it != li.end();++it){
		cout<< *it<<" ";
		if(prIt < li.end()){
			/* prIt +=2; */
		}
		swap(it,prIt);
	}
	cout<<endl;
	cout<<"it at end() "<<*it<<endl;
}
int main(int argc, char *argv[])
{
	list<int> li;
	li = { 1,3,5,8,9,3,5,0 };
	list<int>::iterator it = li.begin();
	cout<<*it<<endl;
	int num;
	/*
	cout<<"enter a number to search: ";
	cin>>num;
	it = li.find(num);
	if (it == li.end(){
	cout<< "num  not found"<<endl;
	}
	else{
	cout<< "num found "<<endl;
	}

	no member name find in list
 	cout<<*(it+3)<<endl;
	 * iterator can't increment by number, such as it+3. possbile incr --> ++it,it++
	/* printIt(li); */
	return 0;
	}
