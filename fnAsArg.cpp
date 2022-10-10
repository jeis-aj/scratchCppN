#include <iostream>
#include "fnPointer.cpp"

using namespace std; 

/* Pointer to function 
 *
 * use case;
 * when multiple algorithms to be performed to a particular argument
 */

int main(int argc, char *argv[])
{
	int (*fn[])(int) = { square,cube,doubleOf,simple };

	int num  = 10;

	for (auto val: fn){
		cout << val(num) <<endl;
	}

	return 0;
}
