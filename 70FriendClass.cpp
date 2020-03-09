#include <iostream>
using namespace std;
class Tero;
class Mero{
	private:
		int m = 1;
	friend Tero;	
};

class Tero{
Mero mo;

public:
void teroFunc(){
cout <<"Mero mo "<<mo.m;	
}


};


int main(){
Tero t;
t.teroFunc();

	
return 0;
}
