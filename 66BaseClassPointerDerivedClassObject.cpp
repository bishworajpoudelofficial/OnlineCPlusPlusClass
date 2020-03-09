#include <iostream>
using namespace std;

class BasicHelicopter{

	public:
		void fly(){
			cout <<"Basic Fly";
		}
		
			cout <<"Basic Land";
		}
		
	
};

class AdvanceHelicopter: public BasicHelicopter{
	
	public:
		void land(){
			cout <<"Advance Land";
		}
		
		void runAc(){
			cout <<"Advance AC";
		}
};

int main(){

BasicHelicopter *p = new AdvanceHelicopter();
p->land();

	
return 0;
}
