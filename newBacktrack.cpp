#include <iostream>
#include <vector>
using namespace std; 


bool fn(vector<vector<char>>, string, const int* rw=NULL,const int* cl=NULL);

int main(int argc, char *argv[])
{
	/*
	   char mat[3][3] = {
	   'a', 'b' , 'c',
	   'd' , 'e' , 'f' ,
	   'g' , 'h' , 'i' , 
	   };
	   */

	vector <vector<char>> mat 
	{
			{ 'g' , 'c' , 'd' },
			{ 'a' , 'c' , 'f' },
			{ 'g' , 'l' , 'i' },
	};

	/* vector<char> arr[3] = { 'e', 'b' ,'c'}; */
	string word = "agm";

	/* int szMat = mat.size(); */
	/* int szArr = arr.size(); */

	// prints matrix & word
	/* map<char,int> mp; */
	cout << "Matrix :" << endl;
	for ( auto sequence: mat ){
		for (auto val: sequence){
			cout << val <<"\t";
			/* mp[val] += 1; */
		}
		cout << endl;
	}
	cout << endl;
	cout <<"word: "<<word<< endl;
	cout << endl;
	// end
	bool x;
	do{
	cout << "Enter string: ";
	cin>> word;
	bool ans = fn (mat,word);
	cout << ans << endl;
	cout << "continue? (1/0)"<<endl;
	cin >> x;
	}while(x);
	return 0;
}
bool fn(vector<vector<char>> mat, string word, const int* rw, const int* cl){
	static int rwSz = mat.size();
	static int clSz = mat[0].size();
	if ( rw == NULL && cl == NULL ){
		for (int rw = 0 ; rw < rwSz ; ++rw){
			for (int cl = 0 ; cl < rwSz ; ++cl){
				if ( mat[rw][cl] == word[0] ){
					if(fn(mat,word.substr(1), &rw, &cl))
						return true;
				}
			}
		}
		return false;
	}
	if (word.empty()){ return true; }
	bool state = false;
	for (int i = 0; i < rwSz ; ++i){
		if ( mat[i][*cl] == word[0] )
			if (fn(mat,word.substr(1),&i,cl)){
				state = true; }
	}
	if(state)
	return state;
	for (int j = 0; j < clSz ; ++j){
		if ( mat[*rw][j] == word[0] )
			if (fn(mat,word.substr(1),rw,&j)){
				state = true; }
	}
	return state;
}
