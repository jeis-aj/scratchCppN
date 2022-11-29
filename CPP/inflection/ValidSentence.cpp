#include <iostream>
#include <vector>

using namespace std; 

bool solve (int N, vector<char> vect);
int main(int argc, char *argv[])
{

	string str = "I$ha@cker";
	vector <char> vect;
	for (auto ch: str){
		vect.push_back(ch); }
	int N = vect.size();

	int out = solve (N,vect);
	cout << out <<endl;
	return 0;
}
bool solve (int N, vector<char> vect){
	char seperator = '0';
	if (vect[0] >= 'A' && vect[0] <= 'Z');
	else return false;

	for (int i = 1; i < N ; ++i){
	bool state = true;	
	if (vect[i] >= 'a' && vect[i] <= 'z')
		state = true;
	else
	{
		if (seperator == '0'){
			seperator = vect[i]; }

		if (seperator != vect[i])
			return false;
		if (!state){ return false; }
		state = false;
	}

	}
	return true;
}
