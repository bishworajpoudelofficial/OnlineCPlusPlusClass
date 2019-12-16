// Multiple Inheritance

#include <iostream>

using namespace std;
class AcademicAct{
	protected:
		int academictotal;
	
	public:
	void GetTotalAcd(){
		cout <<"Enter Academic Total Mark: "<<endl;
		cin >>academictotal;
	}
	
	void DisplayAcdTotal(){
			cout <<" Academic Total Mark: "<<academictotal<<endl;
	}
		
};

class ExtraAct{
	protected:
		float disciplineMark;
		float sportMark;
		
	public:
	void ReadExtraMark(){
			cout <<"Enter Discipline Mark: "<<endl;
		cin >>disciplineMark;
				cout <<"Enter Sport Mark: "<<endl;
		cin >>sportMark;
	}
		void DisplayExtraAct(){
		cout <<" Extra Total Mark Discipline: "<<disciplineMark<<endl;
		cout <<" Extra Total Mark Sport: "<<sportMark<<endl;
	}
			
};

class Result: public AcademicAct, public ExtraAct{
	private:
		float total;
	
	public:
	void CalcuateTotal(){
		total = academictotal + disciplineMark + sportMark;
	}
	
	void DisplayTotal(){
		
		cout << "Total is "<<total<<endl;
	}	
};
int main(){

Result r;
r.GetTotalAcd();
r.ReadExtraMark();
r.CalcuateTotal();
r.DisplayTotal();
return 0;
}
