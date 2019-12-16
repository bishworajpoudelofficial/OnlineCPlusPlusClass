// Single Inheritance
#include <iostream>

using namespace std;

class Person{
	protected:
	int id;
	string name;
	
	void ReadPersonData(){
		cout <<"Enter ID:"<<endl;
		cin >>id;
		cout <<"Enter Name:"<<endl;
		cin >>name;
	}
	
	void DisplayPersonData(){
		cout << "Id is "<<id <<" Name is "<<name<<endl;
	}
};

class Employee: public Person{
	private:
	char post[30];
	double salary;
	
	public:
		void ReadEmpData(){
		ReadPersonData();
		cout <<"Enter Post:"<<endl;
		cin >>post;
		cout <<"Enter Salary:"<<endl;
		cin >>salary;
	}
	
	void DisplayEmpData(){
		DisplayPersonData();
		cout << "Post is "<<post <<" Salary is "<<salary<<endl;
	}
	
};
int main(){

Employee e;
e.ReadEmpData();
e.DisplayEmpData();
return 0;
}
