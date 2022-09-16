#include <iostream>
#include <string>

void printMsg(const char* msg){
	std::cout<<msg<<std::endl;
}

int main(int argc, char *argv[])
{
	
	char msg[] = "char[] hello world";
	std::string message = " string hello world";

	printMsg(msg);
	/* printMsg(message); */
	return 0;
}
