#include <iostream>	
#include <fstream>	

using namespace std; 

int main(int argc, char *argv[])
{
	fstream in;
	in.open("in.txt",ios::in);
	if (!in.is_open()){
		cout<<"  in.txt not found !"<<endl;
		return 0;
	}
	// Error Log File , for large code project
	// Writing file
	
	fstream log;
	log.open("log.txt",ios::out);
	
	while(in){
		string str;
		getline(in,str);
		log<<str<<endl;
		/* in>>str; */
		cout<<str<<endl;
	}
	log.close();
	in.close();
	cout<<"file stream ends"<<endl;
	return 0;
}

