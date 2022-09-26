#include <iostream>
using namespace std; 


namespace arm{
	int lowerAngle = 30;
	int upperAngle =80;
}

namespace leg{
	int lowerAngle =45;
	int upperAngle =20;
}

int findDiffAngle(int a,int b);
int main(int argc, char *argv[])
{
// /*
	using namespace arm;
	int val = findDiffAngle(lowerAngle,upperAngle);
	cout<<val<<endl;
// */
 
// /*
	using namespace leg;
	 val = findDiffAngle(lowerAngle,upperAngle);
	cout<<val<<endl;
// */
	return 0;
}

int findDiffAngle(int a,int b){
	return a-b;
}
