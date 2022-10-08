#include <iostream>
using namespace std; 


class A{
	public:
		 virtual void af(){
			cout<<"af in A called"<<endl;
		}
};

class C{
	public:
		void af(){
			cout<<"af in C"<<endl;
		}
};
class B: public A,public C{
	public:
		using C::af;
		void bf(){
			cout<<"bf called"<<endl;
		};
		void aif(){
			cout<<" af in B called"<<endl;
		}
};

int main(int argc, char *argv[])
{
	B b;
	/*
	b.B::bf();
	b.A::af();
	/* b.B::af(); 
	b.C::af();
	b.af();
	
	cout<< " ply: "<<endl;
	*/
	A *ply;
	ply = &b;
	ply->af();
	
	return 0;
}

