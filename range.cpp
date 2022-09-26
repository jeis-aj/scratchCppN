#include <iostream>
#include <vector>
#include <iterator>
#include <list>
using namespace std; 


template <typename T>
T create(int begin,int end,int step=1){
	int sz = (end-begin)/step;
	T ans;
	for ( begin; begin<end;begin+=step ){
		ans.push_back(begin);
	}
	return ans;
}
/*
 *  Typename template function for creating new array of init value,end value and step,
 *  function can be used to create various data types such as , list ,vector ..etc;
 *  typename T::iterator it; is used to iterate over things;
 */
template <typename T>
void print(auto li){
	typename T::iterator it;	
	for (auto val: li){
			cout<<" "<<val;
			}
	cout<<endl;
}
int main(int argc, char *argv[])
{
	int arr[]={8,3,3,5};
	/* arr.begin(); */
	/* list <int> li{ 1,3,5 }; */
 /* for(auto val:li) ; */
	auto li =create<list<int>>(2,100,5);
	/* print<list<int>>(li); */
	print<vector<int>>(li);
	cout<<li.size()<<endl;


	return 0;
}
