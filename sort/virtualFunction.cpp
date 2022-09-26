#include <iostream>
using namespace std; 

class base {
	private:
		int lucky;
		int unlucky;
	public:
	base(int a,int b){
		lucky = a;	
		unlucky = b;
	}
	virtual void print(){
		cout<<"lucky : "<<lucky<<endl;
		cout<<"unlucky : "<<unlucky<<endl;
	}
};

class derived:public base{
	derivded(int a,int b):base(a,b);

	private:
		int z,x;
	public:
		derived(a,b){
		z = a,x =b;
		}
		void print(){
			cout<<"print: z "<<z<<endl;
			cout<<"print: x "<<x<<endl;
		}
};

int main(){

	derived my(8,9);
	my.print();
}
