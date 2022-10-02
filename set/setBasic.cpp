#include <iostream>
#include <math.h>
#include <string.h>
#include <set>

using namespace std; 

void print(  auto val  ){
	/* int a = typeid(val).name(); */
	for ( auto element : val ){
					/* cout <<"key: "<< element.first <<" "<<"value: "<< element.second<<" "; */
				cout<< element <<" ";
		}
	cout<<endl;

	}



int main(int argc, char *argv[])
{
	set<int> num { 8,3,3,1,2,3,4 };
	set<pair<int,int>> pairSet { {8,3},{3,1},{2,3},{4 ,3}};

	cout<<" simple Set Elements: "<<endl;
	print (num );
	cout<<" pair Set Elements: "<<endl;
	/* print (pairSet); */

	string str = "hele";
	string str2 = "hel";

	uint64_t ph ;
	cout << "Enter phone number: "<<endl;
	cout << decltype(ph) <<endl;
	/* cin>> ph; */
	uint64_t phoneNumber = ph;

	/* uint64_t divisor =1e9; */	
	 ph /=1e9;
	 if (ph >0 && ph<= 9){
		 cout<< " it's a 10 digit number"<<endl;
	 }
	 else{
		 cout<< "not 10 digit"<<endl;
	 }
	 cout<< "phoneNumber: "<<phoneNumber <<endl;

// phone number digit checking 
	/*
	uint64_t out = ph/divisor;
	cout<< out <<endl;	
	cout<< divisor <<endl;	
	*/
	/* cout<< ph <<endl; */	
	/* cout<< log2(phoneNumber)<<endl; */
	cout<< ceil(log10( phoneNumber ))<<endl;
	/*
	   long int intV = (long int )str.c_str();
	   long int intV2 = (long int )str2.c_str();
	   cout<< (intV == intV2 )<<endl;
	   cout<<  intV2 <<endl;
	   cout<<  intV  <<endl;
	   */
	return 0;
}

