#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>

using namespace std; 	

int main(int argc, char *argv[])
{	tm currentTime;

	/* cout<<	"Enter Time: 24HR:  "; */
	/* cin>> get_time(&currentTime,"%R"); */

	if(cin.fail()){ cout<<" Wrong Time"<<endl; }
	/*Time Input
	 * iomanip
	 */
	int val = 10;
	int timeInMin = currentTime.tm_min + currentTime.tm_hour*60;
	stringstream op;
	string str;
	op<< oct << val <<endl;
	op>> str ;
	cout<< str <<endl;	
	/*
	cout<<dec;			// to revert cout to print in the form of hex;
	cout << timeInMin <<endl;
	*/
	
	/* cout<< setw(8) << "*" <<endl; */
	return 0;
}

