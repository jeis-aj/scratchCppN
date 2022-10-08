#include <iostream>
#include <sstream>
#include <stack>

using namespace std; 

template <typename T>
class Queue{
	private:
	stack<T> stk,stk2;
	public:
	void push(T);
	void pop();
	T front();
	void print();
};

template <typename T>
void Queue<T>::push( T data ){
	while(  !stk2.empty() ){
		stk.push(stk2.top());
		stk2.pop();
	}
	stk.push(data);
	while(  !stk.empty() ){
		stk2.push(stk.top());
		stk.pop();
	}
}
template <typename T>
void Queue<T>::pop(){
	stk2.pop();
}

template <typename T>
T Queue<T>::front(){
	stk2.top();
}
template <typename T>
void Queue<T>::print(){
	while ( !stk2.empty() ){
		cout<< stk2.top() <<" ";
		stk2.pop(); }
}

/* Queue using two Stacks
 */

int main(int argc, char *argv[])
{
	string line;
	cout<<"Enter Elements: ";
	getline(cin,line);
	stringstream ss(line);
	int value;
	Queue<int> q;
	while(ss>>value){
	q.push(value);
	}
	q.print();
	cout<<endl;
	cout<< "Queue Elements: ";
	cin>> value;
	q.push(value);
	q.print();
	return 0;
}
