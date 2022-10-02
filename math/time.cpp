#include <iostream>     // std::cin, std::cout
#include <sstream>     // std::cin, std::cout
#include <iomanip>      // std::get_time
#include <ctime>        // struct std::tm
using namespace std; 

int timeFn()
{
  struct tm when;
  cout << "Please, enter the time: ";
  cin >> get_time(&when,"%R");   // extract time (24H format)
  if (cin.fail()) cout << "Error reading time\n";
  else {
    cout << "The time entered is: ";
    cout << when.tm_hour << " hours and " << when.tm_min << " minutes\n";
  }

  return 0;
}

int main(int argc, char *argv[])
{
	tm now;	
	cin>> get_time(&now,"%R");
	int val=0;
	stringstream ss;
		ss<<now.tm_hour;
		ss>>val;
		int minute = 60*val;
		ss<<now.tm_min;
		ss>>val;
		cout<<val<<endl;
		minute+=val;
	cout<<minute<<endl;
	return 0;
}
