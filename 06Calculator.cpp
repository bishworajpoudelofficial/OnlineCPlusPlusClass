// This is our first calculator

#include <iostream>

using namespace std;


int main(){
	
	int a;
	int b;
	
	cout <<"Enter first number:"<<endl;
	cin >>a;
	
	cout <<"Enter second number:"<<endl;
	cin >>b;
	
	cout << "The sum is "<< (a+b)<<endl;
	cout << "The diff is "<< (a-b)<<endl;
	cout << "The mul is "<< (a*b)<<endl;
	cout << "The div is "<< (a/b)<<endl;
	cout << "The rem is "<< (a%b)<<endl;
	return 0;
}
