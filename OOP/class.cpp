#include <iostream>
using namespace std; 


class Polygon{
    protected:
        int width,height;
    public:
		Polygon(  int,int );
        virtual int area(){
            return width*height; }    
		int heightFn(void);
};

Polygon::Polygon(int a,int b){
	width = a,height =b;
}

int Polygon::heightFn(){
	return height;
}

class Rectangle:public Polygon{
	public:
	Rectangle(int a,int b):Polygon(a,b){
		height =a,width =b;
		cout<<"Derived Class obj"<<endl;
	}
	int area(){
		return width-height;
	}
};

 int main(int argc, char *argv[])
{
	
	Polygon no(8,3),*ply;
	Rectangle rect(8,3);
	ply = &rect;

	cout<< ply->area()<<endl;
	cout<< ply->heightFn()<<endl;
	return 0;
//
//}

