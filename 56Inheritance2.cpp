#include <iostream>

using namespace std;
// Inheritance: Using the features of one class to another class.
// OneClass: Base Class /// Another Class: Drived Class

class Rect{
	public:
		int len;
		int bre;
	
	Rect(){
		cout <<"This is constructor of Rect."<<endl;
	}
	
	Rect(int l, int b){
		len = l;
		bre = b;
	}	
};

class Cube: public Rect{
	public:
		int hei;
	
	Cube(){
			cout <<"This is constructor of Cube."<<endl;
	}
	
	Cube(int h,int l, int b):Rect(l,b){
		hei = h;
	}
	
	void CubeCalcuate()	{
		cout <<"The volume if "<<len*bre*hei;
	}
};


int main(){

Cube c(10, 20, 30);
c.CubeCalcuate();

return 0;
}
