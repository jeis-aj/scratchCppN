#include <iostream>
using namespace std; 	

template<typename T>
class List{
	private:
		T data;
		List* Head;
		List* last;
		List* next;
	public:
		List(){
			Head = new List;
		}
		
		List(T data){
			this->data = data;
		}
		void push_back(T data){
			last = new List;
			last->head = data;
			this->next = last;
			this->next = last->next;
		}
}
