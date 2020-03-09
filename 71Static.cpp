#include <iostream>
using namespace std;
// Static : 
class Pokhara{
	public:
	int visitorID;
	string visitorName;
	static int count;
	
	Pokhara(){
		visitorID = 1;
		visitorName = "Bishworaj";
		count++;
	}
	static int getTotalVisitor(){
		return count;
	}
	
};

int Pokhara::count = 0;

int main(){

Pokhara p;
Pokhara po;
Pokhara pop;
Pokhara popa;
Pokhara popaa;
Pokhara popaaa;

cout <<Pokhara::getTotalVisitor();

	
return 0;
}
