#include <iostream>
using namespace std; 


void fn(int a=1,int b=2,string s ="lo"){
	cout<< a <<" "	<<b << " "<< s <<endl;
}

void fn( int b=2,string s ="lo"){
	cout<< 	b << " "<< s <<endl;
}

void fn( string s ="lo"){
	cout<< s <<endl;
}

/*
 *
 * Function overloading
 * Function Pointer
 * typedef pointer 
 */

int typedefFn(int argc, char *argv[])
{
	/*
	fn(2,3,"hello");
	fn(3,"hello");
	fn(3,"");
	fn(2,3,"hello");
	*/
	typedef int* ptr;

	ptr val;
	int value = 8;
	val = &value ;
	cout<< *val <<endl;
	return 0;
}

void calleeFn( void (*fn)(int,string)=0){
	/* if no function passed as argument , get warning msg and return safely 
	 */
	if (*fn == NULL){ cout<< "No Function Passed !"; return; }
	
	fn(3," called fn as arg");
}
void otherFn( int a, string s ){
	for (int i = 0; i < a; ++i) {
		cout<< s<< " "<<endl;
	}
}

void ifArgPassedFn( string *argString=NULL){
	/* if no string passed as argument , get warning msg and get string 
	 */
	string str;
	if (argString == NULL) {
		cout<< " No Args Passed ! Enter String: "<<endl;
		cin>>str;	
	}
	else{
		cout<< *argString <<endl;
	}
}

enum coinSide{ Tail , Head };	// declaring  outComes
int flipCoin(){
	int in;
	cin>> in;
	return in;
}

int main(int argc, char *argv[])
{
	/* void (*fn)(int) fnPtr; */

	/* calleeFn( fn ); */
	/* calleeFn( otherFn ); */
	/* calleeFn(); */

	typedef string *ptrInt;
	string val = "helloWorld";
	ptrInt ptr = &val;
	 
	string name  = "arun";
	
	
	switch (flipCoin())	{
		case Tail:
			cout<<" Tail ";
			break;
		case Head:
			cout<<" Head";
			break;
		default:
			cout<<endl;
	}

	ifArgPassedFn();
	ifArgPassedFn( ptr );
	ifArgPassedFn(&name);
	return 0;
}
