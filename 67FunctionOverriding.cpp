#include <iostream>
using namespace std;
// Override // Overload

class Parent{
	
	public:
		virtual void show(){
			cout <<"I am from Parent.";
		}
		
	
	
};

class Child: public Parent{
	public:
		void show(){
			cout <<"I am from Child.";
		}
};

int main(){

Parent *p = new Child();
p->show();


	
return 0;
}
