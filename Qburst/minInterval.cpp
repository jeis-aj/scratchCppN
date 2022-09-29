#include <iostream>
#include <math.h>
#include <fstream>
#include <vector>
using namespace std; 

int toMinute(string timeString){
	int minute =0;
	int multiplier = 1;
	int position = 0;
	int sz = timeString.length();

	for (int i = sz-1; 0 <= i ; --i){
		char c = timeString[i];
		if (c == ':'){ multiplier *= 60; position = 0; continue; }

		int val = c -'0';
		minute  += multiplier* val*pow(10,position);
		++position;

	}
	return minute;
}

int minInterval(vector<string> vect){
	int minDiff = 24*60;
	 for (int i = 0; i <vect.size()-1; i++) {
		 for (int j = i+1; j <vect.size(); j++) {
			 string minuend = vect[i];
			 string subtrahend = vect[j];
	 		int diffInterval = toMinute( minuend) - toMinute(subtrahend);
			diffInterval = abs(diffInterval); // taking absolute value only
			/* minDiff = minDiff < diffInterval ? minDiff : diffInterval; */ 
	if ( minDiff > diffInterval){
		minDiff = diffInterval;
		cout<< " new minimum is diff b/w "<<minuend<<" and "<<subtrahend<<endl; 
	}
	
	 }
	 
	 }

		 return minDiff;
}
void print( vector <string> vect ){
	for (string val : vect){
		cout<<"[ "<<val<<" ]";
	}
	cout<<endl;
}

int main(int argc, char *argv[])
{
	vector <string> p1Interval {  "21:35", "20:05", "14:55", "11:25", "13:15" };
	vector <string> p2Interval {  "03:39", "13:38", "23:33", "13:33", "03:35" };
	fstream inp("input.txt",ios::in);
	
	int p1Min = minInterval(p1Interval);
	cout<<endl;
	int p2Min = minInterval(p2Interval);
	cout<<endl;
	
	/* int minute = p1Min<p2Min?p1Min:p2Min; */
	int minute;

	/* int minute = toMinute(timeString); */
	cout<<"p1Min "<<p1Min<<endl;
	cout<<"p2Min "<<p2Min<<endl;

	cout<<endl;
	cout<<" person 1: ";
	print (p1Interval);
	cout<<" person 2: ";
	print (p2Interval);
	cout<<endl;
	minute = p1Min < p2Min ? p1Min : p2Min;
	cout<<" minimum interval "<<minute<<" minutes "<<endl;
	
	return 0;
}
