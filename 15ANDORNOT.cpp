#include <iostream>

using namespace std;

int main(){

double price;
double finalprice;
string location;

	cout<<"Enter your price: ";
	cin >> price;
	
	cout<<"Enter your city: ";
	cin >> location;
	
if(price >=1000 || location== "ktm"){
	double discount = price * 10/100;
	finalprice = price - discount;
	
}else{
finalprice = price;	
}

cout << "Your final price is "<< finalprice;



}
