#include <iostream>

using namespace std;

class Person{
	protected:
		string name;
		int age;
	
	public:
	void readData(){
	cout << "Enter name"<<endl;
	cin>>name;
	cout <<"Enter age"<<endl;
	cin>>age;
	}
	
	void displayData(){
		cout <<"Name is "<<name;
		cout <<"Age is "<<age;
	}
	
		
	
};

class Employee: public Person{
	
	private:
		string desigation;
		double salary;
		
	public:
		void ReadEmployee(){
			readData();
			cout<<"Enter Post"<<endl;
			cin >>desigation;
			cout<<"Enter Salary"<<endl;
			cin >>salary;
		}	
		
		void displayEmployee(){
			cout << "The record of employee is :"<<endl;
			displayData();
			cout << "Post"<<desigation<<endl;
			cout <<"Salary"<< salary<<endl;
		}
};

int main(){

Employee emp;
emp.ReadEmployee();
emp.displayEmployee ();

return 0;
}
