#include <iostream>	
#include <queue>	
using namespace std; 


template <typename T>
class Stack{
	private:
		queue<T> q1, q2;
	public:
		void push(T);
		T top();
		void pop();
};

template <typename T>
void Stack<T>::push(T data){
	q2.push(data);
	while(!q1.empty()){
		q2.push(q1.front());
		q1.pop();
	}
	q2.swap(q1);
}

/*
 * implementing stack using two queue
 */

template <typename T>
void Stack<T>::pop(){
	q1.pop();
}

template <typename T>
T Stack<T>::top(){
	return q1.front();
}

int main(int argc, char *argv[])
{
	Stack<int> stk;

	stk.push(8);
	stk.push(3);
	stk.push(9);
	cout<<" val: "<<endl;
	cout<< stk.top() <<endl;
	stk.pop();
	cout<< stk.top() <<endl;
	return 0;
}

