#include <iostream>
#include <map>
using namespace std; 

int main(int argc, char *argv[])
{
	char ch[2];
	/* scanf("%2c",ch); */
	// Receving Two characters   eg. A8
	cin>>*ch>>ch[1];
	//Converting to lower , if Coming char is Upper
	ch[0]= ch[0]>96?ch[0]:ch[0]+32;
	// Converting Character to Number
	int col = ch[0]-'a';

	int row = ch[1]-'0';
	/*
	 * used Map , map key is pair;
	 */
	map<pair<int,int>,string> Color{ {{0,0},"WHTIE"},
									{{0,1},"BLACK"},
									{{1,0},"BLACK"},
									{{1,1},"WHITE"},};
/*
 * Used XOR 
 */
	int  a = (row%2 )^ (col%2);
	if (a){
		cout<<"BLACK MOD"<<endl;
	}
	else{
	cout<<"WHITE MOD"<<endl;
	}

	auto pr = pair{ row%2,col%2 };
	cout<<"col: "<<col<< '\n' <<"row: "<<row<<endl;
	cout<<Color[pr]<<endl;
	
	return 0;
}
