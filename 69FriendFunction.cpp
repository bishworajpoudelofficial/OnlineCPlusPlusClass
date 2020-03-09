#include <iostream>
using namespace std;

class Country{
	private:
		int countryID;
		string countryName;
		
	public:
	Country(){
		countryID = 977;
		countryName = "Nepal";
	}	
	
	friend void printCountry();
};

void printCountry(){
	Country c1;
		cout <<"ID: "<<c1.countryID<<" Name: "<<c1.countryName<<endl;
}


int main(){
printCountry();

	
return 0;
}
