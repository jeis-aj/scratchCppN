#include <iostream>
#include <cstring>
#include <string>

using namespace std; 

int main(int argc, char *argv[])
{
	int i =0;
	/* while( i<argc ){ */
	string str = "arunjyothishkottayil";
	
	/* atoi , string.c_str() ..
	 * /
	 */

	string sub = str.substr(3,5);
	// expected njyot
	
	/* cout<<sub<<endl; */
	
	char lo[5]; 
	strcpy(lo,strstr(str.c_str(),"njyot"));
	cout<<lo<<endl;

	/* int num = strtol(str.c_str()); */
	const char* c = str.c_str()	;
	i = atoi(str.c_str());
	/* cout<<i<<endl; */
	/* cout<<c<<endl; */
	/* c[2] = 'x'; */
	/* cout<<c<<endl; */
	/* cout<<str<<endl; */


	/* cout<<str.c_str(); */

	/* string to char* conversion
	 */

	while(0){
		cout<<argv[i]<<" "<<i;
		int num = atoi(argv[i]);
		cout<<"  int: "<<num<<endl;
		cout<<endl;
		++i;
	}
	/* parse character to int, float ..etc
	 *  string to
	 */

	return 0;
}
