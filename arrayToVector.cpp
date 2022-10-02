#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std; 

void print(auto vect){
	for(auto val: vect){
		cout<<val<<" ";
	}
}
int arrayToVector(int argc, char *argv[])
{
	int arr[]{ 3,4,1,2,7,5,6,8,9,0 };
	int sz = *(&arr+1)-arr;
	vector<int> vect(arr,arr+sz);
	print(vect);
	cout<<endl;
	/*
	 * Sorting vector
	 */
	sort(vect.begin(),vect.end());
	print(vect);
	/* Array  To Vector Conversion
	 * using constructor of vector, from beg addr to end addr
	 */

	cout<<endl;
	list <int> li { 3,3,5,5,8,9 };
	/* vector <int> v(it,li.end()); */
	vector <int> v(li.begin(),li.end());
	/* list to vector conversion using iterator
	 */

	print(v);
	cout<<endl;
	li.sort();
	/*Sorting of list
	 */
	print(li);
	cout<<endl;
	return 0;
}

int main(int argc, char *argv[])
{
#define sz 3
#define sz2  2

	int arr[sz][sz2]={ {2,4},{3,1},{9,3} };
	int ar []= { 3,3,5,5,8,9 };
	int arsz = *(&ar+1)-ar;
	vector <int> arr2 ( ar,ar+arsz );
	print (arr2);
	return 0;
}
