#include <iostream>

using namespace std;
// Private // Public // Protected

class Rectangle{
	private:
	int length;
	int breath;
	
	public:
	void setLength(int l){
		if(l<1){
		cout<<"Negative Number";
		}else{
		this->length = l;
		}
	
	}
		void setBreath(int b){
		this->breath = b;
	}
	
	void GetArea(){
		cout<<"The area is "<<this->length*this->breath;
	}
	
};

int main(){
Rectangle rect;

rect.setLength(-10);
rect.setBreath(10);

rect.GetArea();

return 0;
}
