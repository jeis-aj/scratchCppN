#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
#define fr(i,sz) for(int i=0; i<(sz);++i)
	int num;
	cout<<"Enter a Number: "<<endl;
	cin>>num;
	cout.fill('.');
	fr(i,num){
		if (i&& i<num/2){
		cout<<'.';
		cout.width(i);
		cout<<'*';
		cout.width(num-2*i);
		cout<<'*';
		cout.width(i);
		cout<<'.';
		cout<<endl;
		}
		else if (i>num/2){
			int temp =num-i;
			cout<<'.';
			cout.width(temp);
			cout<< '*';
			cout.width(num-2*temp);
			cout<<'*';
			cout.width(temp);
			cout<<'.';
			cout<<endl;
		}

/* Multiplication Symbol using  Stars and dots
 * cout.width()
 * manipulation
 */
	}
	return 0;
}
