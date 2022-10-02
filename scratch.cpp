#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std; 

int stringFn(int argc, char *argv[])
{
	string numr ="hello893";
	int num;
	/* string str (&numr[1],3); */
	/* auto it = &numr[3]; */
	int it = numr.find("l");
	string str = numr.substr(it);
	cout<< str <<endl;
	/* string str (it); */
	/* string str = numr.substr(3,5); */
	/* num  = stoi(numr); */
	/* cout<<num<<endl; */
	/* cout<<numr<<endl; */
	/* cout<< str <<endl; */
	return 0;
}

int main(int argc, char *argv[])
{
	tm now;
	/* cin>>get_time(&now,"%R"); */
	/* cin>>get_time(now,"%B"); */
	/* cout<<now.tm_hour<<endl; */
	/* cout<<put_money(10.50L); */
	return 0;
}
