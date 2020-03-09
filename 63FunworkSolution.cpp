#include <iostream>
using namespace std;

class Employee{
	protected:
		int id;
		string name;
	// Constructor
	public:
	Employee(int i, string n){
		id = i;
		name = n;
	}
	
	void DisplayEmp(){
		cout <<"ID : "<<id<<endl;
		cout <<"Name: "<<name <<endl;
	}
	
		
};

class ParttimeEmployee: public Employee{
	private:
		double wadge;
	public:
		ParttimeEmployee(int i, string n, double w):Employee(i,n){
			wadge = w;
		}
		
		void DisplayWadge(){
			cout <<"The wadge is "<<wadge;
		}
		
};

class FulltimeEmployee: public Employee{
	private:
		double salary;
	
	public: 
		FulltimeEmployee(int i, string n, double s):Employee(i,n){
			salary = s;
		}
	
	void displaySalary(){
		cout <<"The salary is "<<salary;
	}	
};

int main(){

FulltimeEmployee e1(1, "Bishworaj",50000);
ParttimeEmployee p1(2, "Sital",2000);

e1.DisplayEmp();
e1.displaySalary();

p1.DisplayEmp();
p1.DisplayWadge();
	
return 0;
}
