// Hierachical Inheritance ->

#include <iostream>

using namespace std;
class Person{
	protected:
	int id;
	string name;
	
	public:
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

class Student : public Person{
	private:
		int roll;
	
	public:
	void GetRoll(){
		cout<<"Enter roll: "<<endl;
		cin>> roll;
	}
	
	void DisplayRoll(){
		cout << "Roll is "<< roll;
	}		
};

class Employee: public Person{
	private:
	char post[30];
	double salary;
	
	public:
		void ReadEmpData(){
		cout <<"Enter Post:"<<endl;
		cin >>post;
		cout <<"Enter Salary:"<<endl;
		cin >>salary;
	}
	
	void DisplayEmpData(){
		cout << "Post is "<<post <<" Salary is "<<salary<<endl;
	}
	
};
int main(){



Employee e;
e.ReadPersonData();
e.ReadEmpData();
e.DisplayPersonData();
e.DisplayEmpData();

return 0;
}
