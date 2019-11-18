#include <iostream>

using namespace std;

int main(){

double price = 1200;
double finalprice;
 
if(price >=1000){
	double discount = price * 10/100;
	finalprice = price - discount;
	
}else{
finalprice = price;	
}

cout << "Your final price is "<< finalprice;



}
