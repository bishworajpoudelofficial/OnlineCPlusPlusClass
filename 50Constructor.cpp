#include <iostream>
// Constructor: It is a function, which have same name 
// as class name and no return type.
using namespace std;
class Rectangle{
	private:
		int len;
		int bre;
		
	public:
	Rectangle(){
		this->len = 1;
		this->bre = 1; 
	}
	Rectangle(int l){
		this->len = l;
		this->bre = 1; 
	}	
	Rectangle(int l, int b){
		this->len = l;
		this->bre = b; 
	}
	
	void Area(){
		cout <<"The area is "<<(len*bre);
	}
		
		
};
int main(){
Rectangle r(10,30);
r.Area();

return 0;
}
