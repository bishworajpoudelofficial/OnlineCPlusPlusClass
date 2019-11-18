#include <iostream>

using namespace std;

int main(){
	
// AND && OR || NOT !

	cout<< "Welcome to Voter Check App"<<endl;
	int age;
	cout<<"Enter your age: ";
	cin >> age;
	
	if(age>=16){
		cout << "You are voter. ";
		if(age == 16){
		cout << "We welcome our new voter";	
		}
	}else{
		cout << "You are not voter";
	}
	

return 0;
}
