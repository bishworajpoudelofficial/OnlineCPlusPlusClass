#include <iostream>
using namespace std;
class Base{
	public:
		void func1(){
			cout<<"This is Base fun1.";
		}
		void func2(){
			cout<<"This is Base fun2.";
		}
};

class Derived: public Base{
		public:
		void func3(){
			cout<<"This is Derived fun3.";
		}
};

int main(){

Base *p;
p = new Derived();

p->func1();
p->func2();


	
return 0;
}
