#include <iostream>
using namespace std; 

class Complex{
	protected:
		int imag,real;
	public:
		Complex operator+(const Complex& nxt){
			int rl = real + nxt.real;	
			int im = imag + nxt.imag;	
			return Complex(rl,im);
		}
		Complex(int im,int rl){
			real = rl,imag = im;
		}
		ostream& print(ostream& co){
			co<<real<<" + i"<<imag<<endl;
			return co;
		}
};

int main(int argc, char *argv[])
{
	auto c1 =Complex(3,5);
	auto c2 =Complex(8,2);
	
	auto c3 = c1+c2;
	c3.print(cout);
	return 0;
}
