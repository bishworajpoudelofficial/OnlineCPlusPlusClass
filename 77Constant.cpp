#include <iostream>
using namespace std;
#define PI 3.14
#define p(x) (x*x)
#define big(x,y) (x>y?x:y)

class Bishworaj{
	public:
	int a=10;
	int b=10;
	
	void showData() const{
		
		cout <<a;
	}

	
};

void abc(int &a, int &b){
	a++;
}

int main(){
int x = 10;
int y = 20;
abc(x,y);

cout <<x;


	
	
	return 0;
}
