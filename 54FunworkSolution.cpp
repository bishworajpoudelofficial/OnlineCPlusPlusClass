#include <iostream>

using namespace std;

class Employee{
	private:
		int id;
		string name;
		double salary;
	
	public:
	Employee(int id, string name, double salary){
		this->id = id;
		this->name = name;
		this->salary = salary;
	}
	
	double CalculateYearSalary(){
		return salary*12;
	}	
};

int main(){

Employee brp(1, "Bishworaj",50000);
cout<< brp.CalculateYearSalary();
return 0;
}
