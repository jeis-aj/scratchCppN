#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <map>
using namespace std; 
/*
 * using macros && push_back vector
 * returning vector
 * using iterators
 */
#define vi vector<int>
vi fn(vi& arr){
	/* cout<<"&arr: "<<*arr<<endl; */
#define pb push_back
	vi ans;
	ans.pb(99);
	ans.pb(11);
	return ans;
}
int ma(int argc, char *argv[])
{
#define fr(i,sz) for(int i =0;i<sz;++i)
	/* fr(i,100){ */
		/* cout<<map(i,0,100,13,28)<<endl; */
		/* cout<<i<<endl; */
	/* } */
	/* int arr[]=; */
	vi newV= {1,2,4,8,9,0 };
	vi lo = fn(newV);
	cout<<"hellloo: ";
	vi::iterator it;
	it = lo.begin();
	/* cout<< it; */
	for (;it != lo.end();++it){
		cout<<*it<<' ';
	}
	cout<<endl;
	/*
	for(int val: lo){
		cout<<"val: "<<val<<'\t';
	}
	*/
	cout<<endl;
	return 0;
}


int in(int argc, char *argv[])
{
	map<int,string> months;
	months[1]="january";
	months[2]="february";
	months[3]="march";
	months[4]="april";
	map<int,string>:: iterator it;
	map<int,string>:: reverse_iterator ik;

	map<string,int> pass;

	/* pass["arun"] = 2786; */

	/* pass["jyothu"] = 2658; */

	pass.insert ( {"arun",2658} );
	cout<<"string map: "<<pass["arun"]<<" "<<endl;
	for (it=months.begin();it != months.end();++it){
		cout<<"key: "<<it->first<<" values: "<<it->second<<endl;
	}
	months[6] = "june";
	cout<<"sz: "<<months.size()<<endl;
	/*
	 *Reverse iterator
	 */
cout<<" forward it, start"<<endl;
	for (it = months.end(); it != months.begin();--it){
		cout<<"key: "<<it->first<<" values: "<<it->second<<endl;
	}
cout<<" forward it, stop"<<endl;

	/* can't use decrement in iterator */
	ik = months.rbegin();
	/* if(ik == months.end()){ */
	/* cout<<"months.end() == reverse_iterator"<<endl; */
	/* } */

	/* works as pointer but not memory address */

	for ( ;ik != months.rend();++ik){
		cout<<"key: "<<ik->first<<" values: "<<ik->second<<endl;
	}
	cout<< months[6] <<endl;
	cout<< months[5] <<endl;
	cout<<"iterator -- && ++ test"<<endl;
	it = months.begin();
	cout<<"BEGIN: ";
		cout<< it->second;
	cout<<endl;
	it++;	
	cout<<"BEGIN: ";
		cout<< it->second;
	cout<<endl;
	--it;	
	cout<<"BEGIN: ";
		cout<< it->second;
	cout<<endl;
	return 0;
}

int main(int argc, char *argv[])
{
	map<string,int>::iterator it;
	
	int num;
	cout<<"Enter nos Data: ";
	cin>>num;
	map<string,int> pass;
	pass.insert({"arun",2658});
	for (it = pass.begin(); it!= pass.end(); ++it){
		cout<<"key: ";
		string str;
		/* cin>>str; */
		int data;
		cout<<"data: ";
		cin>>data;
		/* it->first = str; */
		it->second = 0;
		it->second = data;
	}
	map<string,int>::iterator ik;
	for(ik= pass.begin(); ik!= pass.end();++ik){
		cout<<ik->first<< " <- key, "<<"\t "<<ik->second<<" <- value"<<endl;
	}

	/* map<string,int>::iterator ik; */
	/* for(ik= pass.begin(); ik!= pass.end();++ik){ */
	/* 	cout<<ik->first<< " <- key"<<'\t '<<ik->second<<" <- value"<<endl; */
	/* } */

	
	return 0;
}
