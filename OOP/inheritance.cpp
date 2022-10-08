#include <iostream>
using namespace std; 


class Person{
    protected:
		string name,gender;
        int age;
    public:
		void setValues(string name,int age, string gender){
			this->gender = gender;
			this->name = name;
			this->age = age;
		}
		void getGender(){
			cout<<" Gender: "<<gender <<endl; }
		void getName(){
			cout<<" Name: "<<name<<endl; }
};


class Employee:public virtual Person{
	public:
		Employee(string name,int age, string gender){
			this->setValues(name,age,gender);
		}
		void Gender(){
			getGender();
		}
};

 int main(int argc, char *argv[])
{
	Person emp1;
	emp1.setValues("Arun",25,"male");
	Employee emp2("Jyothish",23,"Male");
	emp1.getGender();
	emp2.Gender();
	emp2.getGender();
	cout<<" end !"<<endl;
	return 0;
}

