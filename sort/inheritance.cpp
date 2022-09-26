#include <iostream>
using namespace std; 

class animal{
	private:
		string color;
		string name;
	protected:
		/* virtual int x =10; */
	public:
		string getColor(){ return color; }
		string getName(){ return name; }
		void setName(string);
		/*
		 * empty braces blocks need for constructor overloading
		 */

		animal(){};

		/*
		 * Constructors Can't be defined as virtual Functions
		 */
		
		animal(string,string);
};

animal::animal(string nm, string cl){ name = nm,color =cl; }

void animal::setName(string str){ name = str; }

class human:public animal{
	string emotion;
	 int x =30;
	public:
	human(string nm,string cl,string em):animal(nm,cl){
	emotion = em;	
	}
	void whatEmotion(){
		cout<<emotion<<endl;
	}
};

int main(int argc, char *argv[])
{
	/* animal cat; */
	/* cat.setName("kitty"); */
	/* cout<<cat.getName()<<endl; */

	auto ptr = new human ("arun","fair","love");
	human* ptrArr[19]{ ptr };
	cout<<ptr->getName()<<endl;
	ptr->whatEmotion();
	return 0;
}
