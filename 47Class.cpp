// Class : Blueprint for creating object.
#include <iostream>

using namespace std;

class Person{
	// data
	public:
	int id;
	string name;
	double height;
	
	// function
	void getName(){
		-------
		------
		cout<< "The name is "<<name;
	}
};

int main(){

Person p;
p.id =1;
p.name = "Bishworaj";
p.height = 1.9;
p.getName();

return 0;
}
