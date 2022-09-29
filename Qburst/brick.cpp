#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

vector<int> brickUsed;
int minNumber(vector<int>& vect, const int& num){
	// passing vector, num as reference inorder to reduce space complexity
	int sz = vect.size();
	static int rt =0 ;
	if (num ==0){	return 0;}
	if (sz<1){rt =-1; return -1;}
	int back = vect.back();
	if (num>=back){
		/* cout<<"brick used: "<<back<<endl; */
		brickUsed.push_back(back);
		/* cout<<back<<" "; */
		rt+=1;
		minNumber(vect,num-back); 
	}
	else{vect.pop_back();
		minNumber(vect,num); }
	return rt;
}
/* Qburst Brick Problem
 *
 * Minimum Currency problem
 * #recursion #vectorPassing #numPassing #staticInt
 */

void print(vector<int> vect){
	cout<<endl;
	for (auto val: vect){
		cout<<val<<" ";
	}
	cout<<endl;
}
int findAll(vector<int>& vect,int n){
	int sz = vect.size();
	for (int i = 0; i < sz; i++) {
		int rt = minNumber(vect,n);
		if (rt<0){
			// if we couldn't find sum , pop_back from list inorder to reduce
			vect.pop_back();
			rt = minNumber(vect,n);
		}
		else{
			// at any point, we could find the possible solution then return from function
			cout<<endl<<"Brick used: ";
			print(brickUsed);
			/* cout<<endl; */
			return rt;
		}
	}
	//Returning -1, if all the possibilities Covered
	return -1;
	// making sure all the possibilities covered
	
}

int main(int argc, char *argv[])
{

	vector<int> vect { 3,2,5,7,8,9 };
	/* out = findAll(vect,num); */
	int num;
	cout<<"Enter a length of brick: ";
	cin>>num;
	int out = findAll(vect,num);
	cout<<"count required to make length: "<<num<<" is : "<<out<<endl;
	return 0;
}
