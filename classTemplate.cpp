#include <iostream>
using namespace std; 

class sol{
	public:
		template <class T>
		T get(T val){
		return val;	
		}
};

/*
 * Using Template in Class
 */

int main(int argc, char *argv[])
{
		
	sol mySol;	
	cout<< mySol.get('c')<<endl;
	cout<< mySol.get(8)<<endl;
	return 0;
}
