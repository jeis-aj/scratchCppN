#include <iostream>
#include <unistd.h>
/* #include <stdlib.h> */
using namespace std; 	

void rotationProgress(int );
int main(int argc, char *argv[])
{
	int num = 31;
	for (int i =0;i<num; ++i){
		int j;
		num = num%2 ? num-1 : num;
		j = i<num/2? i:num-i; 
		
	}
	cout.fill('.');
	cout.width(10);
	cout<<'*';
	/* rotationProgress(5); */
	sleep(2);
	cout.width(-2);
	cout<<'#';

	return 0;
}
/*
 * progress rotation 
 * sleep
 */
void fn(char);
void rotationProgress(int num){
	string prog ="\\|/-";
	for(int i = 0;i<num/prog.length(); ++i){
		for (auto val:prog){
			fn(val);
		}
	}
}
void fn(char c){
	cout<<c<<endl;
	sleep(1);
	system("clear");
}
