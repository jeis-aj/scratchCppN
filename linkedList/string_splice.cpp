#include <iostream>
#include <sstream>
#include <ctime>
#include <iomanip>

using namespace std; 

int main(int argc, char *argv[])
{
	tm now;
	
	if(cin.fail()){ cout<< "wrong" ;}
	string time;
	cout<<"Enter Time: ";
	cin>>time;
	stringstream ss(time);

	ss>> get_time(&now,"%R");
	int hour,min;
	cout<<now.tm_hour<<" hour";
	cout<<now.tm_min<<" min";
	cout<<endl;
	
	/* string name ="arun:jyothish"; */
	string name =time;
	auto i = name.find(':');
	string firstSub = name.substr(i+1);
	string secondSub = name.substr(0,i);
	cout<<"hour1: "<<firstSub <<endl;
	cout<<"min1: "<<secondSub <<endl;
	return 0;
}
