//2. WAP in C++ that find area of circle. Formula: PIE*R*R


#include <iostream>
using namespace std;
#define PI 3.14;
int main(){
	
	double radius;
	
	cout<< "Enter Radius:"<<endl;
	cin >> radius;
	
double value = radius * radius * PI;

	cout << "The area of circle is "<<value;
	
	
	
	return 0;
}
