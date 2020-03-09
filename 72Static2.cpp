#include <iostream>
using namespace std;

class Software{
	public:
		static double price;
		
		static double getPrice(){
			return price;
		}
};

double Software::price = 25000.0;

int main(){

Software::price = 250;
cout <<"The price of software is "<<Software::getPrice();
	
return 0;
}
