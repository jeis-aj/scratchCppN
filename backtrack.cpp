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
			{ 'a' , 'b' , 'c' },
			{ 'g' , 'e' , 'i' },
			{ 'g' , 'l' , 'm' },
	};

	/* vector<char> arr[3] = { 'e', 'b' ,'c'}; */
	string word = "agm";

	/* int szMat = mat.size(); */
	/* int szArr = arr.size(); */

	// prints matrix & word
	cout << "Matrix :" << endl;
	for ( auto sequence: mat ){
		for (auto val: sequence){
			cout << val <<"\t";
		}
		cout << endl;
	}
	cout << endl;
	cout <<"word: "<<word<< endl;
	cout << endl;
	// end

	bool ans = fn (mat,word);
	cout << ans << endl;
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
	for (int i = 0; i < rwSz ; ++i){
		if ( mat[i][*cl] == word[0] )
			return fn(mat,word.substr(1),&i,cl);
	}
	for (int j = 0; j < clSz ; ++j){
		if ( mat[*rw][j] == word[0] )
			return fn(mat,word.substr(1),rw,&j);
	}
	return false;
}
