#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
	char ch[2];
	string name = "kisi8";
	int dif = &name[3] -&name[0];
	cout<<dif;
	/* cout<< name.size(); */
	return 0;
}
