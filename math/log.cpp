#include <iostream>
#include <math.h>

using namespace std; 

int otherFn()
{
	int base = 2, result = 8;
	int expp =  log10(1000);
	int num = 3e3;
	cout<<expp<<endl;
	/* double result2 = exp10(0); */
	/* cout<<num<<endl; */
	/* cout<< result2 <<endl; */
	

	return 0;

}

long int reverseOfaNum(long int num){

	long int iteration =0;
	long int result = 0;
	while( 0< num ){
		int digit = num % 10;
		int ten = 10;
		 result =  result*ten + digit;
		 /* cout<<result<<endl; */
		++iteration;
		num/=10;
	}
	return result;
}

int StringInsert(int argc, char *argv[])
{
	/* string str ="some val"; */
	string str ;
	string str2 ;
	/* str.clear(); */
	/* cout<<str.size()<<endl; */
	/* str2 += "3"; */
	string tempStr = " The given String is: " ;
	string ss = str.empty()?"empty": "not empty";
	tempStr.insert(tempStr.size(),ss);
	cout<< tempStr <<endl;
	/* cout<<str2<<endl; */
	/*
	long int num = 892453;
	long int result = reverseOfaNum(num);
	cout<<"Reverse of number : "<<num<<" is : "<<result<<endl;
	return 0;
	*/

	/* otherFn(); */
	return 0;
}
int main(int argc, char *argv[])
{
	string str = "arunkottayil";
	string str2 = "jyothish";

	swap_ranges(str.begin()+2,str.end()-6,str2.begin()+2);
	/* str2.swap(str); */
	cout<<str2<<endl;
	return 0;
}
