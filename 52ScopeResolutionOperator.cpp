#include <iostream>

using namespace std;

class Rectange{
	
	public:
		int len;
		int bre;
	

	int CalcuateArea(){
		return len * bre;
	}
	
	int CalcuatePremeter();	
	
};

Rectange::CalcuatePremeter(){
		return 2*(len + bre);
}


int main(){
Rectange r;
r.len = 10;
r.bre = 20;

cout<<r.CalcuateArea()<<endl;
cout<<r.CalcuatePremeter()<<endl;


return 0;
}
