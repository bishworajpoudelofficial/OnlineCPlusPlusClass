#include <iostream>

using namespace std;

class Rectangle{
public:
int len;
int bre;


Rectangle(int l=1, int b=1){
	len = l;
	bre = b;
}

Rectangle(Rectangle &r){
	len = r.len;
	bre = r.bre;
}

void GetArea(){
	cout<< "The area is "<<(len*bre);
}
	
};
int main(){
Rectangle r1;
Rectangle r2(r1);
r2.GetArea();

return 0;
}
