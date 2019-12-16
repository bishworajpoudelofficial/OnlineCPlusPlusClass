//2. Multilevel Inheritance
// Student --- Exam --- Result

#include <iostream>

using namespace std;

class Student{
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

class Exam: public Student{
	protected:
		float sub1, sub2;
	
	public:
	void GetMarks(){
		cout <<"Enter sub1 mark: "<<endl;
		cin >> sub1;
		cout <<"Enter sub2 mark: "<<endl;
		cin >> sub2;
	}
		void DisplayMarks(){
		cout <<"Sub1 mark: "<<sub1<< endl;
		cout <<"Sub2 mark: "<<sub2<< endl;
	}	
};

class Result: public Exam{
	private:
		float total;
		
	public:
	void CalcuateTotal(){
		total = sub1 + sub2;
	}
	
	void DisplayResult(){
		cout << "Total is "<<total<<endl;
	}	
	
		
};

int main(){

Result r;
r.GetRoll();
r.GetMarks();
r.CalcuateTotal();
cout<<"After Calcuating result:";

r.DisplayRoll();
r.DisplayMarks();
r.DisplayResult();


return 0;
}
