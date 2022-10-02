#include <iostream>
#include <iomanip>
#include <fstream>
#include <bitset>
#include <iterator>
#include <list>
#include <complex>
using namespace std; 

int Fn(int argc, char *argv[])
{
	complex point1 (2,2);
	complex endPoint(3,2);
	auto addR = point1 + endPoint;
	cout<< addR <<endl;
	cout<< addR.real() <<endl;
	cout<< addR.imag() <<endl;
	cout<< abs(addR) <<endl;
	cout<< arg(addR) <<endl;
	return 0;
}
int listFn()
{
	string s = "hello";
	list<char> listChar = { 'a','b','c' };
	
	list<char> listInt(listChar);

	for (auto c: listInt){
		cout<< c <<endl;
	}
	/* s.insert(3,"LS;A"); */
	string str = "localthings";
	s.insert(1,3,3);
	cout<<s<<endl;
	return 0;
}

int iteratorAdvance(int argc, char *argv[])
{
	list<char> listChar = { 'a','b','c','x','y','z','2' };
	list<char>::iterator it,start,end;
	start = listChar.begin();
	end = listChar.end();
	/*
	advance(start,3);
	cout<<*start<<endl;
	*/
	cout<< *next(start,3)<<endl;
	int val = distance(start,end);
	cout<<val<<endl;
	return 0;
}
int bitsetFn(int argc, char *argv[])
{
	bitset<8> bs(0xff);
	cout<< bs.to_string()<<endl;
	/* cout<< bs.size() <<endl; */
	bs[3]=false;
	cout<< bs.to_string()<<endl;
	bs.flip();
	cout<< bs.to_string()<<endl;
	bs.reset();
	cout<< bs.to_string()<<endl;
	bs.set();
	cout<< bs.to_string()<<endl;

	cout<< bs.all() <<endl;
	//	small letters
	/* cout<< bs.count()<<endl; */
	return 0;
}

int bitsetTolong(int argc, char *argv[])
{
	const int sz =14;
	bitset<sz> bs;
	bs.set();
	cout<<bs.to_string()<<endl;
	cout<< bs.to_ullong() <<endl;
	return 0;
}

int fstreamFn(int argc, char *argv[])
{
	int num = 172;
	cout<<oct<<num<<endl;
	/* cout<<val<<endl; */
	fstream op;
	op.open("op.txt",ios::out);
	op<<oct<<num<<endl;
	op.close();

	/*
	 * Conversion of Decimal,hex,octal
	 * using Stream operation
	 */

	return 0;
}

int main(int argc, char *argv[])
{
	/* listFn(); */
	cout<< setw(10) <<"he"<<endl;
	return 0;
}
