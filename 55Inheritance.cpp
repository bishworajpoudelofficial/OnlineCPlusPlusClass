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
};

class Cube: public Rect{
	public:
		int hei;
	
	Cube(){
			cout <<"This is constructor of Cube."<<endl;
	}	
};


int main(){

Cube cb;


return 0;
}
