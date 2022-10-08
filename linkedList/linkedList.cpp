#include <iostream>
using namespace std; 	

template<class T>
class myList{
	
	private: 
		struct List{
			T data;
			struct List* prev;
			struct List* next;
		};
		struct List *last;
		struct List *Head;
	public:
		myList(T data = 0 ){
			Head  = new List{data}; 
			last = Head;
		}
		void print();
		void push_back(T);
		template<class S>
		friend void showList(myList<S>);
};

template<class T>
void myList<T>::print(){
	struct List* it = Head;
	while(it){
		cout<< it->data <<" ";
		it = it->next;
	}
}

/* Created a linked list, with template push_back  fn
 *
 */

template<class T>
void myList<T>::push_back(T data){
	last->next = new List{data};
	last = last->next;
}

int main(int argc, char *argv[])
{
	myList<int> li(4);

	int i = 0,sz = 10;
	while(i< sz){
		li.push_back(i*2);
		++i; }

	li.print();
	return 0;
}
