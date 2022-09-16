/*
 *
 * define various macros
 * and their uses
 *
 */

#include <iostream>
#include <vector>

using namespace std; 

int fn(int v1,int v2);
void printTriangle(int );
int main(int argc, char *argv[])
{
#define add(x,y) x+y
	cout<< add(5,7)<<endl;

int val = fn(8,9);
cout<<"mul: "<< val;
int sz =5;
printTriangle(sz);
/*
 *shortening long  freaquently used keywords, fn names using macro

 */
#define pb push_back
#define vi vector<int>

vi new_vector;
new_vector.pb(2);
new_vector.pb(8);
#define nv new_vector
cout<<"new_vector front: "<<nv.front()<<endl;
cout<<"new_vector back: "<<nv.back()<<endl;
	return 0;
}
int fn(int v1,int v2){
	int ans;
#define mul(a, b) a*b
	ans = mul(v1,v2);
	return ans;
}


void printTriangle(int sz ){
#define fori(i,sz)	for (int i =0;i<sz ;++i)
	/*
	 * Using macros to shorten For loop for Array manipulation
	 */
	fori(i,sz){
		fori(j,i){
			cout<<'*'<<' ';
		}
		cout<<endl;
	}
}
