#include <iostream>
#include <iterator>

using namespace std; 

class base{
	protected:
		int a,b;
	public:
	base(int a, int b){
	this->a = a;
	this->b = b;
}
};

template <typename itera>
void print(itera it, int countMax){
	int count = 0;
	while( count < countMax){
		cout<< *it <<" ";
		++it;
	}
}

int main(int argc, char *argv[])
{
	 circular circularLinked;
	 circularLinked<int>::iterator it ;
	/* it  = circularLinked.head(); */

	 for (int val =0 ; val  < 15 ; ++val){
		 circularLinked.insert (val);
	 }
	 
	 int size = circularLinked.size();
	 cout<<" size of circularLinked list : "<<size<<endl;

	 /* print(it, 20); */

	return 0;
}
