//Inner Class: In one class there is another class
#include <iostream>
using namespace std;

class Outer{
	
	public:
	int a = 30;
	static int o;
	
	
	void outerFunc(){
		// Task
	}
	
	class Inner{
		public:
			o = 10;
	};
	
};


int main(){


	
return 0;
}
