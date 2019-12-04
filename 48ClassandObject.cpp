#include <iostream>

using namespace std;

class Circle{
	public:	
	double radius;
	
	double findArea(){
		double radius = 3.14 * this->radius * this->radius;
		return radius;
	}
	
};

int main(){

Circle c1, c2;
c1.radius = 2;
c2.radius = 3.8;



double radiusofc2= c2.findArea();
cout<<"The radius of c2 is "<<radiusofc2;



return 0;
}
