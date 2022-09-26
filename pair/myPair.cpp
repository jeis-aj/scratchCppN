#include <iostream>
/* #include <pair> */
#include <tuple>
#include <string>
#include <vector>
using namespace std; 
/*
 * pair and tuples
 */

template<typename T,typename o>
pair<T,o> fn(void);
int ma(int argc, char *argv[])
{
	
	pair<int,int> p =pair{3,5};
	cout<<p.first<<endl;	
	cout<<p.second<<endl;	

	/* tuple<int,string,char> tp (3,"val: ",'X'); */
	/* tuple<int,string,char> tp ; */

	auto tp= tuple{8,"val: ",'X'};
	tp= tuple(9,"val: ",'X');
	cout<<get<0>(tp)<<endl;
	cout<<get<1>(tp)<<endl;
	cout<<"tup_end"<<endl;
	auto po =fn<int,char>();
	cout<<po.first<<" "<<po.second<<endl;
	return 0;
}

template<typename T,typename o>
pair<T,o> fn(void){
	pair<int,char> p{2,'x'};
	return p;
}

struct data{
	static int val;
	string name;
	int id;
};
/* Static members in Struct, assign value to static member
 *  (value{ sdoi }) vl }() 8(fdd}( lssjdl 
 *  helloWorld$lowcal
 */
int data::val =0;
struct data dn(void){
	struct data rt;
	rt.name ="arun";
	rt.id = rt.val+10;
	return rt;
}

void run(void);

int main(int argc, char *argv[])
{
#define pr pair<int,string>
	vector<pr> po;
#define pb push_back
	po.pb(pair{3,"arun"});
	po.pb(pair{8,"jyothi"});
	pair <int,string> d = {19,"new pair"};
	/*
	pair <int,string> d = {19,"new pair"};

	auto d = pair{19,"new"};
	auto d = pair(19,"new");
	*/
	po.pb(d);
	cout<<po.back().second<<endl;
	
	return 0;
}
void run(void){
	auto st = dn();
		cout<<st.name<<endl;
		cout<<st.id<<endl;
		/* struct data.val = 1881; */
		cout<<st.val<<endl;
		st.val = 1001;
		cout<<st.val<<endl;
}
